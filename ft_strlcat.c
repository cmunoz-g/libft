#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t  i;
    size_t  j;
    size_t  destlen;

    destlen = ft_strlen(dest);
    j = destlen;
    i = 0;
    if (destsize > 0)
    {
        while (src[i] && j < (destsize - 1))
            dest[j++] = src[i++];
        dest[j] = '\0';
    }
    return (ft_strlen(src) + destlen);
}