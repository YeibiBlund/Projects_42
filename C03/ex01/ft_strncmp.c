#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("Hola", "Hola", 4));
	printf("%d\n", ft_strncmp("Hola", "Hula", 2));
	printf("%d\n", ft_strncmp("Hola", "Holanda", 4));
	printf("%d\n", ft_strncmp("Hola", "Hula", 4));
	printf("%d\n", ft_strncmp("Hola", "HolaMundo", 8));
	printf("%d\n", ft_strncmp("Hola", "", 4));
	return (0);
}