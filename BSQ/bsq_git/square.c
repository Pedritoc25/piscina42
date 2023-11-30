/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-olm <pdel-olm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:39:25 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/28 23:26:31 by pdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	check_square(t_map *map, int size, int row, int col)
{
	int	i;
	int	j;

	i = row;
	while (i < row + size)
	{
		j = col;
		while (j < col + size)
		{
			if (map->matrix[i][j] == map->obst)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	search_size(struct s_map *map, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows - size + 1)
	{
		j = 0;
		while (j < map->cols - size + 1)
		{
			if (check_square(map, size, i, j))
			{
				fill_square(map, size, i, j);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	search_map(t_map *map)
{
	int	size;

	size = get_lower_dimension(*map);
	while (size > 0)
	{
		if (search_size(map, size))
			return (1);
		size--;
	}
	return (0);
}

void	search_squares(t_map *maps, int n_maps)
{
	int	i;

	i = 0;
	while (i < n_maps)
	{
		if (!(maps[i].error))
			if (!(search_map(&maps[i])))
				maps[i].error = 1;
		i++;
	}
}
