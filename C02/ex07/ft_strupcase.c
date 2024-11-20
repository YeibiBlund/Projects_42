/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:26:11 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/20 14:36:40 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
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

    printf("Resultado para str1: %s\n", ft_strupcase(str1)); 
    printf("Resultado para str2: %s\n", ft_strupcase(str2)); 
    printf("Resultado para str3: %s\n", ft_strupcase(str3)); 
    printf("Resultado para str4: %s\n", ft_strupcase(str4)); 

    return 0;
}*/
