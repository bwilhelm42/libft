#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	if (!dst)
		return (0);
	while (*src && --siz > 0)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ft_strlen(src));
}
