#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*cpy;

	size = ft_strlen(s) + 1;
	cpy = (char *)malloc(size);
	ft_strlcpy(cpy, s, size);
	return (cpy);
}

//tiene buena pinta pero no la he probado, hay que volver a revisar cuando se compile todo junto