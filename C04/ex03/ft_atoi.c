int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char input[100];
    int result;

    printf("Introduce un número: ");
    scanf("%99s", input);

    result = ft_atoi(input);
    printf("El número convertido es: %d\n", result);

    return 0;
}*/