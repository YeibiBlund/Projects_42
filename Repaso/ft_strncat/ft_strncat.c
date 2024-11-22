#include <stdio.h>

char	*ft_strncat(char *src, char *dest, unsigned int n)
{
	int i = 0; 
	int j = 0; 

	while (dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest; 
}

int	main(void)
{
	char	src[] = "mundo.";
	char	dest[] = "Hola ";

	ft_strncat(src, dest, 2);
	printf("Cadena resultante: %s", dest);
	return (0);
}
