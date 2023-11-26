/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:18:18 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/23 23:50:45 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	condition;

	condition = 1;
	if (*str < 'a' || *str > 'z')
		condition = 0;
	return (condition);
}

int	ft_str_is_uppercase(char *str)
{
	int	condition;

	condition = 1;
	if (*str < 'A' || *str > 'Z')
		condition = 0;
	return (condition);
}

char	*ft_strup_or_low(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= ' ';
	else if (*str >= 'A' && *str <= 'Z')
		*str += ' ';
	return (str);
}

int	ft_str_is_alphanumeric(char *str)
{
	int	condition;

	condition = 1;
	if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')
			|| (*str >= '0' && *str <= '9')))
		condition = 0;
	return (condition);
}

char	*ft_strcapitalize(char *str)
{
	int	upper;
	int	i;

	upper = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (upper == 1)
		{
			if (ft_str_is_lowercase(&str[i]))
				ft_strup_or_low(&str[i]);
			upper = 0;
		}
		else
		{
			if (ft_str_is_uppercase(&str[i]))
				ft_strup_or_low(&str[i]);
			else if (!ft_str_is_alphanumeric(&str[i]))
				upper = 1;
		}
		i++;
	}
	return (str);
}
/*int main()
{
	char	str[] = "hola pePSicola-45uy per";
	char	*result = ft_strcapitalize(str);

	printf ("%s", result);
}*/
