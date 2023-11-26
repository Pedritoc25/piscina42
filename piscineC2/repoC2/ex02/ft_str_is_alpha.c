/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:20:10 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/21 13:08:18 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	condition;
	int	i;

	condition = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			condition = 0;
		i++;
	}
	return (condition);
}
/*int	main()
{
	int condition;
	char	str[] = "HolaQueTal";
	condition = ft_str_is_alpha(str);
	
	printf ("%d", condition);
}*/
