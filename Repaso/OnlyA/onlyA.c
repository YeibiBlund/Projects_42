#include <stdio.h>
#include <unistd.h>

void	ft_print(char src)
{
	write (1, &src, 1);
	//write (1, "a" , 1);
}

int	main (void)
{
	char src;

	src = 'h';
	ft_print(src);
	return (0);
}
