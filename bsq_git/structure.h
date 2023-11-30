/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:04:09 by pdel-olm          #+#    #+#             */
/*   Updated: 2023/11/28 20:37:29 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_map
{
	int		rows;
	int		cols;
	char	empty;
	char	obst;
	char	full;
	char	**matrix;
	int		error;
}	t_map;

#endif
