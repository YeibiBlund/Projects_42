int	ft_is_prime(int nb)
{
	int	div;

	div = 3;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	while (div * div <= nb)
	{
		if (nb % div == 0)
		{
			return (0);
		}
		div = div + 2;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int num;
	int res;

	printf("Introduce number: ");
	scanf("%d", &num);
	res = ft_is_prime(num);
	printf("RESULTADO: %d \n", res);
	if(res == 1)
	{
		printf("El numero %d SI ES PRIMO \n", num);
	}
	if(res == 0)
	{
		printf("El numero %d NO ES PRIMO \n", num);
	}
	return (0);
}*/