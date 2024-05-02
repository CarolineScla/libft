/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:07:40 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/02 14:44:21 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_o;

	i = 0;
	last_o = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last_o = (char *)(s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (last_o);
}
