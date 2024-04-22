/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:08:29 by csclavon          #+#    #+#             */
/*   Updated: 2024/04/22 10:18:52 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isprint(int c)
{
    if (c >= 32 && c <= 127)
        return (1);
    else
        return (0);
}
