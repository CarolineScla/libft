/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:07:06 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/09 11:19:16 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	tmp;
	size_t	safe_size;

	tmp = nmemb;
	safe_size = nmemb * size;
	if (tmp > safe_size && safe_size != 0)
		return (NULL);
	p = malloc(safe_size);
	if (p == 0)
		return (NULL);
	ft_memset(p, 0, safe_size);
	return (p);
}
