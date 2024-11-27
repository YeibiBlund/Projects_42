int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

void	main(void)
{
	int number;
	int power; 
	printf("Introduce number: ");
	scanf("%d", &number);
	printf("Introduce power: ");
	scanf("%d", &power);

	int result = ft_iterative_power(number, power);
	printf("%i \n", result);
}*/