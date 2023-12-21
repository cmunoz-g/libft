#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *cpy;

    cpy = s;
    while (n > 0)
    {
        *cpy = 0;
        cpy++;
        n--;
    }
}