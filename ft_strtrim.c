/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:26:57 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/07 18:09:38 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (isset(set, s1[start]))
		start++;
	while ((end > start) && isset(set, s1[end]))
		end--;
	str = malloc(sizeof(char) * (end - start + 1) + 1);
	ft_strlcpy(str, s1 + start, (end - start + 1) + 1);
	return (str);
}
