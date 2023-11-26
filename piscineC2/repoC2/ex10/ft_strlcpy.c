/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcabanas <pcabanas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:45:31 by pcabanas          #+#    #+#             */
/*   Updated: 2023/11/24 00:37:16 by pcabanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*int main()
{
	char dest[] = "Hola";
	char src[] = "MuyBuenasATodos";
	unsigned int size = 10;
	unsigned int result = ft_strlcpy(dest, src, size);

	printf ("%u", result);
}*/
