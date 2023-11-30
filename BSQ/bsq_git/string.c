/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-olm <pdel-olm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:40:30 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/29 15:46:01 by pdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_c_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

int	ft_c_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
