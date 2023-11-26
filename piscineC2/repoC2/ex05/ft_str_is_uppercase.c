/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:04:48 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/24 00:26:05 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	condition;
	int	i;

	condition = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			condition = 0;
		i++;
	}
	return (condition);
}
/*int main()
{
	char str[]= "ABC";
	int condition = ft_str_is_uppercase(str);

	printf ("%d", condition);
}*/
