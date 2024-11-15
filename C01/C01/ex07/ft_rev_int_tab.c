/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:03:21 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/14 12:07:47 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int	main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	int size = 5;

	printf("Array inicial: ");
	for (int i = 0; i < size; i++) 
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	ft_rev_int_tab(array, size); 

	printf("Array invertido: ");
	for (int i = 0; i < size; i++) 
	{
		printf("%d ", array[i]);
    }
    printf("\n");
}*/
