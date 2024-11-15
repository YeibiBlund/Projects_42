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
			while(tab[i] > tab[i + 1])
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


int	main()
{
	int array[] = {1, 2, 7, 4, 3, 5, 20};
	int size = 7; 

	ft_sort_int_tab(array, size);

	printf("Array invertido: ");
   	for (int i = 0; i < size; i++)
       	{
        printf("%d ", array[i]);
    }

}
