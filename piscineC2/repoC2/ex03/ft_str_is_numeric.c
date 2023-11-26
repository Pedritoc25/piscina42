/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:53:22 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/21 13:08:49 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	condition;
	int	i;

	condition = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			condition = 0;
		i++;
	}
	return (condition);
}
/*int main()
{
	char srt[] = "1234";
	int condition = ft_str_is_numeric(srt);

	printf ("%d", condition);
}*/
