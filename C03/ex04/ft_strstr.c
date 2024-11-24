#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*int main() {
    char str[] = "Hola mundo, esto es una prueba";
    char to_find[] = "mundo";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
        printf("Subcadena encontrada: '%s'\n", result);
    else
        printf("Subcadena no encontrada\n");

    return 0;
}*/