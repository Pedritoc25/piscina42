/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-olm <pdel-olm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:01:36 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/29 16:59:42 by pdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	get_args(int *fd, t_map *map, int argsize)
{
	int		i;
	char	c;

	i = 0;
	while (i < argsize && !map->error)
	{
		read(*fd, &c, 1);
		if (i < argsize - 3)
		{
			if (ft_c_is_numeric(c))
				map->rows = map->rows * 10 + (c - '0');
			else
				map->error = 1;
		}
		else if (i == argsize - 3)
			map->empty = c;
		else if (i == argsize - 2)
			map->obst = c;
		else if (i == argsize - 1)
			map->full = c;
		i++;
	}
	if (map->empty == map->obst
		|| map->empty == map->full || map->obst == map->full)
		map->error = 1;
}

void	fill_row(int *fd, t_map *map, int i)
{
	char	c;
	int		j;

	map->matrix[i] = (char *) malloc(map->cols * sizeof(char));
	j = 0;
	while (j < map->cols && !map->error)
	{
		read(*fd, &c, 1);
		if (c == '\n' || c == '\0')
			map->error = 1;
		else if (c == map->empty)
			map->matrix[i][j] = map->empty;
		else if (c == map->obst)
			map->matrix[i][j] = map->obst;
		else
			map->error = 1;
		j++;
	}
}

void	validate_matrix(int *fd, t_map *map)
{
	int		i;
	char	c;

	read(*fd, &c, 1);
	map->matrix = (char **) malloc(map->rows * sizeof(char *));
	i = 0;
	while (i < map->rows && !map->error)
	{
		fill_row(fd, map, i);
		read(*fd, &c, 1);
		if (c != '\n' || c == '\0')
			map->error = 1;
		i++;
	}
	if (read(*fd, &c, 1) > 0)
		map->error = 1;
}

void	validate_map(t_map *map, char *file)
{
	int		fd;

	map->cols = 0;
	map->rows = 0;
	fd = open(file, O_RDONLY);
	get_args(&fd, map, open_file_first_time(map, file));
	validate_matrix(&fd, map);
	close(fd);
}

t_map	*validation(t_map *maps, int n_maps, char **files)
{
	int		i;

	i = 0;
	while (i < n_maps)
	{
		validate_map(&maps[i], files[i]);
		i++;
	}
	return (maps);
}
