/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:29:26 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/19 13:45:24 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(void)
{
    char str1[] = "minus\tculas";
    char str2[] = "m\nIXTO";
    char str3[] = "99";
	char str4[] = "";
	char str5[] = "MAYUSCULAS";

	printf("Resultado para %s: %d\n",str1 , ft_str_is_printable(str1));
	printf("Resultado para %s: %d\n",str2 , ft_str_is_printable(str2));
	printf("Resultado para %s: %d\n",str3 , ft_str_is_printable(str3));
	printf("Resultado para %s: %d\n",str4 , ft_str_is_printable(str4));
	printf("Resultado para %s: %d\n",str5 , ft_str_is_printable(str5));
 
   return 0;
}*/
