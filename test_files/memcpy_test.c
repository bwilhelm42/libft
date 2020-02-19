#include "../libft.h"
#include <stdio.h>

int		main()
{
	char str[6] = "12345";
	char str_dest;
	
	ft_memcpy(&str_dest, str, 4);
	printf("%s\n", &str_dest);
	return (0);
}
