#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	if (!*s || start > ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		res = (char *)malloc(size + 1);
	else
		res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
    	res[i++] = s[start++];
    res[i] = '\0';
	return (res);
}