/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenez <dximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:52:07 by dximenez          #+#    #+#             */
/*   Updated: 2023/11/12 13:33:50 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush00(int x, int y);
void	draw_first_row(int x);
void	draw_intermediate_rows(int x);
void	draw_last_row(int x);

void	rush00(int x, int y)
{
	int		y_index;

	y_index = 1;
	if (x > 0 && y > 0)
	{
		while (y_index <= y)
		{
			if (y_index == 1)
				draw_first_row(x);
			else if (y_index == y)
				draw_last_row(x);
			else
				draw_intermediate_rows(x);
			ft_putchar('\n');
			y_index++;
		}
	}
}

void	draw_first_row(int x)
{
	int	x_index;

	x_index = 1;
	while (x_index <= x)
	{
		if (x_index == 1 || x_index == x )
			ft_putchar('o');
		else
			ft_putchar('-');
		x_index++;
	}
}

void	draw_intermediate_rows(int x)
{
	int	x_index;

	x_index = 1;
	while (x_index <= x)
	{
		if (x_index == 1 || x_index == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		x_index++;
	}
}

void	draw_last_row(int x)
{
	int	x_index;

	x_index = 1;
	while (x_index <= x)
	{
		if (x_index == 1 || x_index == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		x_index++;
	}
}
