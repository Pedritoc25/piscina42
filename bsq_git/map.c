/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-olm <pdel-olm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 23:20:03 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/29 16:44:04 by pdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	get_lower_dimension(t_map map)
{
	if (map.rows < map.cols)
		return (map.rows);
	return (map.cols);
}

void	fill_square(t_map *map, int size, int row, int col)
{
	int	i;
	int	j;

	i = row;
	while (i < row + size)
	{
		j = col;
		while (j < col + size)
		{
			map->matrix[i][j] = map->full;
			j++;
		}
		i++;
	}
}

// ¿/n adicional?
void	ft_put_map(t_map map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map.rows)
	{
		j = 0;
		while (j < map.cols)
		{
			if (map.matrix[i][j] == map.empty)
				ft_putchar(map.empty);
			else if (map.matrix[i][j] == map.obst)
				ft_putchar(map.obst);
			else if (map.matrix[i][j] == map.full)
				ft_putchar(map.full);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_maps(t_map *maps, int n_maps)
{
	int	i;

	i = 0;
	while (i < n_maps)
	{
		if (!maps[i].error)
			ft_put_map(maps[i]);
		else
			ft_putstr("Map error\n");
		i++;
	}
}
