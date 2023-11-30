/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdel-olm <pdel-olm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:39:44 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/29 16:44:17 by pdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	main(int argc, char **argv)
{
	t_map	*maps;
	int		n_maps;

	n_maps = argc - 1;
	maps = malloc(n_maps * sizeof(t_map));
	maps = validation(maps, n_maps, ++argv);
	search_squares(maps, n_maps);
	ft_print_maps(maps, n_maps);
	free(maps);
	return (0);
}
