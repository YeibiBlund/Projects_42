#include <stdio.h>

int	ft_strncmp(char	*src1, char *src2, unsigned int n)
{
	int i = 0; 

	while(src1[i] != '\0' && src2[i] != '\0' && i < n)
	{
		if(src1[i] != src2[i])
		{
			return src1[i] - src2[i];
		}
		i++;
	}
	return src1[i] - src2[i];

}

int	 main(void)
{
	char str1[] = "Hola"; 
	char str2[] = "HOlaa"; 
	int result = 0; 

	result = ft_strncmp(str1, str2, 2); 
	printf("Reesultado %i", result);
	return 0; 

}
