#include "libft.h"

size_t	checkset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	i;
	char	*s2;

	len = ft_strlen(s1);
	start = 0;
	i = 0;
	while (s1[start] && checkset(s1[start], set) == 1)
		start++;
	while (len > start && checkset(s1[len - 1], set) == 1)
		len--;
	len -= start;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	while (i < len)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}