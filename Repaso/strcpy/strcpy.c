#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *src, char *dest)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	main(void)
{
	char src[] = ("Hola mundo");
	char dest[20];

	ft_strcpy(src, dest);
	printf("Cadena copiada: %s", dest);
	return 0;
}
