#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	totalsize;

	totalsize = nmemb * size;
	if (nmemb != 0 && totalsize / nmemb != size)
		return (NULL);
	res = malloc(totalsize);
	if (res == NULL)
		return (NULL);
	ft_memset(res, 0, totalsize);
	return (res);
}
