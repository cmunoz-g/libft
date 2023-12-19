#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    char *cpy;

    while (*str != '\0')
    {
        if (*str == c)
        {
            cpy = (char *)str;
        }
        str++;
    }
    if (*cpy == '\0')
        return (0);
    else
        return (cpy);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char c = '4';
    const char *str = "";

    printf("%s\n",strrchr(str, c));
    printf("%s\n",ft_strrchr(str, c));

    return (0);
}*/