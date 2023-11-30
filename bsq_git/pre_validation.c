/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-olm <pdel-olm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:38:04 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/29 16:43:55 by pdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	get_numcols(int *fd, t_map *map)
{
	char	c;

	c = '0';
	while (c != '\n' && c != '\0' && !map->error)
	{
		if (c == '\0' || !ft_c_is_printable(c))
			map->error = 1;
		else
		{
			read(*fd, &c, 1);
			map->cols++;
		}
	}
}

int	get_argsize(int *fd, t_map *map)
{
	int		argsize;
	char	c;

	c = '0';
	argsize = 0;
	while (c != '\n' && c != '\0' && !map->error)
	{
		if (c == '\0' || !ft_c_is_printable(c))
			map->error = 1;
		else
		{
			read(*fd, &c, 1);
			argsize++;
		}
	}
	read(*fd, &c, 1);
	return (argsize - 1);
}

int	open_file_first_time(t_map *map, char *file)
{
	int		fd;
	char	c;
	int		argsize;

	c = '0';
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		map->error = 1;
		return (0);
	}
	argsize = get_argsize(&fd, map);
	get_numcols(&fd, map);
	if (argsize < 4)
	{
		map->error = 1;
		return (0);
	}
	close(fd);
	return (argsize);
}
