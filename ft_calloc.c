#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void*	arr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	arr = malloc(total);
	ft_bzero(arr, total);
	return (arr);
}
