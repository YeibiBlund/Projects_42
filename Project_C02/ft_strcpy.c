#include <stdio.h>

char	*ft_strcpy(char *dest, char *src) 
{
    		int	i;
	       
		i = 0;
    		while (src[i] != '\0') 
	{
        		dest[i] = src[i];
        		i++;
 		}
   		dest[i] = '\0';
		return dest;
}

int	main(void)
{
	char src[] = "Hola mundo";
	char dest[20];

	ft_strcpy(dest, src);
	printf("Cadena original (src): %s\n", src);
	printf("Cadena copiada (dest): %s\n", dest);
}
