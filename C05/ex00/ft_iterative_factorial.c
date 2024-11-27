int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

void	main(void)
{
	int nb;
	int result; 

	printf("Introduce number: ");
	scanf("%d", &nb);

	result = ft_iterative_factorial(nb);

	printf("El factorial de %d es: %d\n", nb, result);
}*/