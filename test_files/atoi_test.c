#include "../libft.h"
#include <stdio.h>

int		main()
{
	ft_putnbr(atoi("99999"));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi("99999998"));
	write(1, "\n", 1);
	return (0);
}	
