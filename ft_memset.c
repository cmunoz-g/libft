#include <stdio.h>
#include <string.h>

void    *ft_memset(void *str, int c, size_t n)
{
    int i;
    
    i = 0;
    while (i < (n - 1))
    {
        str[i] = c;
        i++;
    }
    return (str);
}

int main()
{
    char str[50];
    int c = 90;
    size_t n = 10;

    ft_memset(str, c, n);
    printf("%s\n", str);
    return (0);
}