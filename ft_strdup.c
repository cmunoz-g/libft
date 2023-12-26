#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*cpy;

	size = ft_strlen(s) + 1;
	cpy = (char *)malloc(size);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, size);
	return (cpy);
}
