/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:02:50 by csclavon          #+#    #+#             */
/*   Updated: 2024/04/29 11:46:30 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	t;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	t = 0;
	if (size == 0)
		return (len_src);
	if (size < len_dst)
		len_src += size;
	else
		len_src += len_dst;
	while (src[t] != '\0' && (len_dst + t) < size - 1)
	{
		dst[len_dst + t] = src[t];
		t++;
	}
	dst[len_dst + t] = '\0';
	return (len_src);
}
