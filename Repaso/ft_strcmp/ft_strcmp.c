#include <stdio.h>

int	ft_strcmp(char	*str1, char *str2)
{
	int i = 0; 

	while(str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return str1[i] - str2[i];
		}
		i++;
	}
	return str1[i] - str2[i];
}

int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "HOla"; 

	int	result = ft_strcmp(str1, str2); 
	printf("Resultado: %i", result); 
}
