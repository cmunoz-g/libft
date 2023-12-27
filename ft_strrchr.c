#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    const char *lastc;
    char        ch;

    ch = (char)c;
    lastc = NULL;
    while (*str)
    {
        if (*str == ch)
            lastc = str;
        str++;
    }
    if (ch == '\0')
        return ((char *)str);
    else
        return ((char *)lastc);
}

