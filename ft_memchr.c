#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   ch;
    unsigned char   *sh;

    i = 0;
    ch = c;
    sh = (unsigned char *)s;
    while (i < n)
    {
        if (sh[i] == ch)
            return (sh + i);
        i++;
    }
    return (0);
}
