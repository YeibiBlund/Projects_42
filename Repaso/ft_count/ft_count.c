#include <stdio.h>

int	ft_count(char	*src)
{
	int	cont = 0; 

	while(*src)
	{
		cont++;
		src++;
	}
	return cont; 
}

int	main(void)
{
	char	src[] = "Hola Mundo";
	int	cont = 0; 

	cont = ft_count(src);
	printf("Numero de palabras de Hola Mundo: %i", cont);
	return 0;
}
