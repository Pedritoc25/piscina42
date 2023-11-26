/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:08:42 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/24 00:14:25 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	condition;
	int	i;

	condition = 1;
	i = 0;
	if (str[i] < 32 || str[i] > 126)
		condition = 0;
	return (condition);
}

void	ft_dec_to_hex(char *str)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write (1, "\\", 1);
	write (1, &hexa[(*str) / 16], 1);
	write (1, &hexa[(*str) % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_str_is_printable(&str[i]))
			ft_dec_to_hex(&str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int main()
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}*/
