/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:25:30 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/21 19:04:28 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	condition;
	int	i;

	condition = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			condition = 0;
		i++;
	}
	return (condition);
}
/*int main()
{
	char	str[] = "!()^*";
	int		condition = ft_str_is_printable(str);

	printf ("%d", condition);
}*/
