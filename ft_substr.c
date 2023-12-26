#include "libft.h"

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	size;

	if (!s)
		return (NULL);
	else if (ft_strlen(s) < start)
	{
		res = (char *)malloc(1);
		if (res == NULL)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	size = ft_strlen(s + start);
	if (len == SIZE_MAX || size < len)
		res = (char *)malloc(size + 1);
	else
		res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, (s + start), (len + 1));
	return (res);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;
	size_t		aux;

	if (!s)
		return (NULL);
	i = 0;
	aux = ft_strlen(s);
	if (!*s || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len != 0 && start <= aux)
	{
		((char *)str)[i] = ((char *)s)[start];
		start++;
		i++;
		len--;
	}
	((char *)str)[i] = '\0';
	return (str);
}

/*int main()
{
	char *result = ft_substr("hola", 0, SIZE_MAX);
	if (result)
		printf("%s\n",result);
	return 0;
}*/