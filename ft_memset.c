/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:21:17 by csclavon          #+#    #+#             */
/*   Updated: 2024/04/26 11:05:24 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (i < n)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
