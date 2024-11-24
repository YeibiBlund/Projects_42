#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*int main(void)
{
    char dest[20] = "Hola ";
    char src[] = "mundo.";
    unsigned int size = 20;  // Tamaño total del búfer

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Cadena resultante: %s\n", dest);
    printf("Longitud: %u\n", result);

    return 0;
}*/
