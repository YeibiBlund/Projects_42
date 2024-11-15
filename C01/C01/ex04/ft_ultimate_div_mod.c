/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:50:31 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/14 12:28:02 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a;
	tmp2 = *b;
	*a = tmp1 / tmp2;
	*b = tmp1 % tmp2;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("Valor de a  ANTES de la funcion: %d \n", a);
	printf("Valor de b ANTES de la funcion: %d \n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("Valor de a  DESPUES de la funcion: %d \n", a);
	printf("Valor de b DESPUES de la funcion: %d \n", b);
}*/
