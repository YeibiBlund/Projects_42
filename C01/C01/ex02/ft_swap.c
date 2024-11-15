/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:17:17 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/14 12:24:35 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 6;
	printf("Valor de num1 ANTES de la funcion: %d \n", a);
	printf("Valor de num2 ANTES de la funcion: %d \n", b);
	ft_swap(&a, &b);
	printf("Valor de num1 DESPUES de la funcion: %d \n", a);
	printf("Valor de num2 DESPUES de la funcion: %d \n", b);
}*/
