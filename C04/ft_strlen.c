#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	str[] = "Hola Mundo";
	int	res = ft_strlen(str);
	printf("Longitud de: %s  ---->  %i",str, res);
	return (0);
}*/
