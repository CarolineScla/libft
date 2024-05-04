/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:59:26 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/04 11:58:50 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;
	int		j;
	int		k;
	int		word;

	i = 0;
	word = 0;
	if (s == NULL)
		return (NULL);
	new_str = (char **) malloc((ft_strlen(s) + 1) * sizeof(char *));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		if (i > j)
		{
			new_str[word] = (char *)malloc(i - j + 1);
			k = 0;
			while (j < i)
				new_str[word][k++] = s[j++];
			new_str[word][k] = '\0';
			word++;
		}
	}
	new_str[word] = '\0';
	return (new_str);
}
