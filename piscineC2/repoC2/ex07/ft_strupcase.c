/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:47:30 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/21 17:04:54 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ' ';
		i++;
	}
	return (str);
}
/*int	main()
{
	char str[] = "Hola Mundo!";
	char *result = ft_strupcase(str);

	printf("%s", result);
}*/
