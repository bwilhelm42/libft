#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (siz + 1 > srclen)
		ft_strcpy(dst, src);
	else if (siz != 0)
	{
		while (--size > 0)
		{
			*dst = *src;
			src++;
			dst++;
		}
		*dst = '\0';
	}
	return (srclen);
}
