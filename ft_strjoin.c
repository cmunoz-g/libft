#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3size;

	s3size = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(s3size);
	if (s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, (ft_strlen(s1) + 1));
	ft_strlcat(s3, s2, s3size);
	return (s3);	
}