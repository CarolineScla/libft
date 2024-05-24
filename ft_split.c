/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:59:26 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/13 17:44:39 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(char const *s, char c)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			ii++;
		i++;
	}
	return (ii);
}

static int	count_len(char const *s, int start_i, char c)
{
	int	i;
	int	ii;

	i = start_i;
	ii = 0;
	while (s[i])
	{
		if (s[i + 1] == c && s[i] != c)
			return (ii);
		i++;
		ii++;
	}
	return (ii);
}

static char	**fill_new_str(char **new_str, char *str, char c)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (str[i] != 0)
	{
		if (x == 0)
			new_str[y] = malloc(sizeof(char) * (count_len(str, i, c) + 1));
		if (str[i] == c)
		{
			new_str[y++][x] = 0;
			x = 0;
			while (str[i] && str[i] == c)
				i++;
		}
		else
			new_str[y][x++] = str[i++];
	}
	if (new_str[y])
		new_str[y][x] = '\0';
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	char	*str;
	char	tmp_trim[2];

	tmp_trim[0] = c;
	tmp_trim[1] = '\0';
	if (ft_strlen(s) == 0)
	{
		new_str = malloc(sizeof(char *) * 1);
		return (new_str);
	}
	str = ft_strtrim(s, tmp_trim);
	if (!str)
		return (NULL);
	new_str = ft_calloc(sizeof(char *), count_char(str, c) + 2);
	if (!new_str)
		return (NULL);
	new_str = fill_new_str(new_str, str, c);
	return (new_str);
}
