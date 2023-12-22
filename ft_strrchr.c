#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    char *cpy;

    cpy = NULL;
    while (*str != '\0')
    {
        if (*str == c)
        {
            cpy = (char *)str;
        }
        str++;
    }
    if (*cpy == '\0')
        return ((char *)str);
    else
        return (cpy);
}
