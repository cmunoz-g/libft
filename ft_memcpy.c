#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destcpy;
    const unsigned char *srccpy;

    if (!dest || !src)
        return (NULL);
    destcpy = dest;
    srccpy = src;
    while (n > 0)
    {
        *destcpy = *srccpy;
        n--;
        destcpy++;
        srccpy++;
    }
    return (dest);
}
