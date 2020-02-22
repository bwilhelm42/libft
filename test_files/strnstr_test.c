#include "../libft.h"
#include <stdio.h>

int		main()
{
	write(1, strnstr("", "hello", 0), 6);
	write(1, "\n", 1);
	write(1, ft_strnstr("", "hello", 0), 6);
	return (0);
}
