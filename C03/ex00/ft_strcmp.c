/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:41:24 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/20 13:04:35 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if  (*s1 != *s2)
        {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
	return (*s1 - *s2);
}
/*int main(void)
{
    char str1[] = "Hola";
    char str2[] = "Hola";
    char str3[] = "Mundo";
    char str4[] = "Hol";

    printf("ft_strcmp(str1, str2): %d\n", ft_strcmp(str1, str2));
    printf("ft_strcmp(str1, str3): %d\n", ft_strcmp(str1, str3));
    printf("ft_strcmp(str3, str1): %d\n", ft_strcmp(str3, str1));
    printf("ft_strcmp(str1, str4): %d\n", ft_strcmp(str1, str4));
}*/
