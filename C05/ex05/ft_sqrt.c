int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		result++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int num; 
	int	res;

	printf("Introduce number: ");
	scanf("%d", &num);
	res = ft_sqrt(num);
	printf("%d \n", res);
	return (0);
}*/