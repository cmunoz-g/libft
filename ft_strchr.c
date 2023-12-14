char    *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return ((char *)str);
        str++;
    }
    return (0);
}

//revisar lo del casteo de char* en el return, creo que está bien pero he leido que puede dar problemas.

/*#include <stdio.h>
#include <string.h>

int main()
{
    char c = '4';
    const char *str = "holahola4";

    printf("%s\n",strchr(str, c));
    printf("%s\n",ft_strchr(str, c));

    return (0);
}*/