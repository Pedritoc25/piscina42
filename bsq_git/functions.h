/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-olm <pdel-olm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:45:55 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/29 16:43:58 by pdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include "structure.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

void	fill_square(t_map *map, int size, int row, int col);
void	ft_print_maps(t_map *maps, int n_maps);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		get_lower_dimension(t_map map);
int		ft_c_is_printable(char c);
int		ft_c_is_numeric(char c);
int		open_file_first_time(t_map *map, char *file);
void	search_squares(t_map *maps, int n_maps);
t_map	*validation(t_map *maps, int n_maps, char **files);

#endif