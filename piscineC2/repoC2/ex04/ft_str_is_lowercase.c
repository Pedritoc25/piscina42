/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:10:51 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/21 13:34:19 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	condition;
	int	i;

	condition = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			condition = 0;
		i++;
	}
	return (condition);
}
/*int	main()
{
	char str[] = "abc";
	int	condition = ft_str_is_lowercase(str);
	printf ("%d", condition);
}*/
