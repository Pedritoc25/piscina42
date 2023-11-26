/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:38:27 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/15 16:13:33 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int		i;
	char	character;

	i = 0;
	while (i < 26)
	{
		character = 'a' + i;
		write (1, &character, 1);
		i++;
	}
}
