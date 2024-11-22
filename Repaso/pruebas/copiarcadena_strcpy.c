#include <stdio.h>

char	*ft_strcpy(char *src, char *dest)
{
	int i = 0; 
	int j = 0; 

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
		char	dest[20] = "Hola, ";

		ft_strcpy(src, dest);
		printf("Cadena resultante: %s", dest); 
	}
