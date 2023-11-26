/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:43:21 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/26 17:43:51 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	//char *matriz[4][4];
	conditions(argc, argv);
	// ft_print();
	return (0);
}

int	conditions(int argc, char const *argv[])
{
	char *clues;
	int i;

	clues = (char *) malloc(4 * 4);
	while (argv != "\0")
	{
		if (argv != " ")
		{
			clues[i] = argv[i]+ '0';
			i++;
		}
		argv++;
	}
	// printf["%s", clues];
	write(1, &clues, 32);
	free(clues);
	return (0);
}
/* int ft_print()
 {
   char *matriz[4][4] = {
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'},
        {'0', '0', '0', '0'}
    };

    int i = 0;
    while (i < 4) {
        int j = 0;
        while (j < 4) {
            printf("%c ", matriz[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return (0);
 }*/
