/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:19:29 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/20 12:20:04 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word)
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char str[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un";
	printf("Antes: %s\n", str);
	printf("Despues: %s\n", ft_strcapitalize(str));
	return (0);
}*/
