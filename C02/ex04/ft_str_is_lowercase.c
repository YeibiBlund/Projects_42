/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:14:46 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/19 13:28:19 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z')))
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

    printf("Resultado para %s: %d\n",str1 , ft_str_is_lowercase(str1));
    printf("Resultado para %s: %d\n",str2 , ft_str_is_lowercase(str2));
    printf("Resultado para %s: %d\n",str3 , ft_str_is_lowercase(str3));
	printf("Resultado para %s: %d\n",str4 , ft_str_is_lowercase(str4));
 
   return 0;
}*/
