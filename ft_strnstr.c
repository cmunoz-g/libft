#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			ret = (char *)(haystack) + i;
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			if (!needle[j])
				return (ret);
			j = 0;
		}
		i++;
	}
	return (0);
}
