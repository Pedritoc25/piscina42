/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:34:20 by fgalvez-          #+#    #+#             */
/*   Updated: 2023/11/12 13:34:33 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush03(int x, int y);
void	draw_first_row(int x);
void	draw_intermediate_rows(int x);
void	draw_last_row(int x);

void	rush03(int x, int y)
{
	int		y_index;

	y_index = 1;
	if (x > 0 && y > 0)
	{
		while (y_index <= y)
		{
			if (y_index == 1 || y_index == y) 
				draw_first_row(x);
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
		if (x_index == 1)
			ft_putchar('A');
		else if (x_index == x)
			ft_putchar('C');
		else
			ft_putchar('B');
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
			ft_putchar('B');
		else
			ft_putchar(' ');
		x_index++;
	}
}
