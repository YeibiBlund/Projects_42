int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
/*
#include <stdio.h>

void	main(void)
{
	int nb;
	int result; 

	printf("Introduce number: ");
	scanf("%d", &nb);

	result = ft_recursive_factorial(nb);

	printf("El factorial de %d es: %d\n", nb, result);
}*/