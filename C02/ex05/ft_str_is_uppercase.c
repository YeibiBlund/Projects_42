/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:23:03 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/19 13:27:24 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main(void)
{
    char str1[] = "minusculas";
    char str2[] = "mIXTO";
    char str3[] = "99";
	char str4[] = "";
	char str5[] = "MAYUSCULAS";

    printf("Resultado para %s: %d\n",str1 , ft_str_is_uppercase(str1));
	printf("Resultado para %s: %d\n",str2 , ft_str_is_uppercase(str2));
    printf("Resultado para %s: %d\n",str3 , ft_str_is_uppercase(str3));
    printf("Resultado para %s: %d\n",str4 , ft_str_is_uppercase(str4));
	printf("Resultado para %s: %d\n",str5 , ft_str_is_uppercase(str5));
 
   return 0;
}*/
