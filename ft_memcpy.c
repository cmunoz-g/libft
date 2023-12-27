#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destcpy;
    const unsigned char *srccpy;

    destcpy = dest;
    srccpy = src;
    if (n == 0 || src == dest)
		return (dest);
    while (n > 0)
    {
        *destcpy = *srccpy;
        n--;
        destcpy++;
        srccpy++;
    }
    return (dest);
}
