#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    char    ch;

    ch = (char)c;
    while (*str != '\0')
    {
        if (*str == ch)
            return ((char *)str);
        str++;
    }
    if (ch == '\0')
        return ((char *)str);
    return (0);
}

// la funcion da segfault con NULL, al igual que la funcion original