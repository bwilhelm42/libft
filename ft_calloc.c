#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void*	arr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	if ((arr = malloc(total)) == NULL)
		return ;
	ft_bzero(arr, total);
	return (arr);
}
