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

int main() {
    const char *str = NULL;
    int c = '\0';

    char *result = strrchr(str, c);
    if (result != NULL)
        printf("Last occurrence of '%c': %s\n", c, result);
    else
        printf("Character '%c' not found in the string.\n", c);

    char *ft_result = ft_strrchr(str, c);
    if (ft_result != NULL)
        printf("MY FUNC: Last occurrence of '%c': %s\n", c, ft_result);
    else
        printf("MY FUNC: Character '%c' not found in the string.\n", c);

    return 0;
}
