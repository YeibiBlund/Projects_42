/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:01:44 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/19 13:13:54 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(void)
{
    char str1[] = "1234";
    char str2[] = "Hello123";
    char str3[] = "";

    printf("Resultado para %s: %d\n", str1, ft_str_is_numeric(str1));
	printf("Resultado para %s: %d\n", str2, ft_str_is_numeric(str2));
	printf("Resultado para %s: %d\n", str3, ft_str_is_numeric(str3));   
	return 0;
}*/
