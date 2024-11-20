/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:41:36 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/19 15:45:40 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (start);
}

/*int main(void)
{
    char str1[] = "hola mundo";
    char str2[] = "123 abc";
    char str3[] = "HELLO WORLD!";
    char str4[] = "";

    printf("Resultado para str1: %s\n", ft_strlowcase(str1)); 
    printf("Resultado para str2: %s\n", ft_strlowcase(str2)); 
    printf("Resultado para str3: %s\n", ft_strlowcase(str3)); 
    printf("Resultado para str4: %s\n", ft_strlowcase(str4)); 
}*/
