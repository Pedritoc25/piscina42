/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:57:47 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/15 21:46:57 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	com[5];

	com[0] = '/';
	com[2] = ' ';
	while (com[0]++ < '9')
	{
		com[1] = '/';
		while (com[1]++ < '9')
		{
			com[3] = '/';
			while (com[3]++ < '9')
			{
				com[4] = '/';
				while (com[4]++ < '9')
				{
					if (com[0] * 10 + com[1] < com[3] * 10 + com[4])
					{
						write (1, &com, 5);
						if (com[0] != '9' || com[1] != '8' || com[3] != com[4])
							write (1, ", ", 2);
					}
				}
			}
		}
	}
}
