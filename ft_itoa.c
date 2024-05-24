/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 23:54:45 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/09 17:11:48 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*check_min_int(void)
{
	char	*str;

	str = (char *) ft_calloc(12, 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy (str, "-2147483648");
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		is_neg;

	is_neg = 0;
	if (n == -2147483648)
		return (check_min_int());
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	i = int_len(n) + is_neg;
	str = (char *) ft_calloc((i + 1), 1);
	str[i] = '\0';
	while (i > is_neg)
	{
		i--;
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
