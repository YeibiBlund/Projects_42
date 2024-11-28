int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	int	index;
	int	result;

	printf("Introduce number");
	scanf("%d", &index);
	result = ft_fibonacci(index);
	printf("Resultado: %d \n", result);
	return (0);
}*/