#include <stdio.h>

char	*ft_strcat(char *src, char *dest)
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
	char src[] = ("Mundo");
	char dest[20] = ("Hola, ");

	ft_strcat(src, dest);

	printf("resultado %s", dest);	
}
