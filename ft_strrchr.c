#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    const char *lastc;

    lastc = NULL;
    while (*str)
    {
        if (*str == c)
            lastc = str;
        str++;
    }
    if (c == '\0')
        return ((char *)str);
    else
        return ((char *)lastc);
}

