/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joscueva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:08:59 by joscueva          #+#    #+#             */
/*   Updated: 2024/11/14 12:23:14 by joscueva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < size -1)
		{
			while (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
	}
}

/*int	main()
{
	int array[] = {1, 2, 7, 4, 3, 5, 20};
	int size = 7; 
	int i = 0; 
	int e = 0;

	printf("Array Inicial: ");
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}

	printf("\n");
	ft_sort_int_tab(array, size);
	i = 0;
	printf("Array ordenado: ");
   	while (i < size)
       	{
        printf("%d ", array[i]);
		i++;
    	}
}*/	
