int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
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

	int result = ft_recursive_power(number, power);
	printf("%i \n", result);
}*/