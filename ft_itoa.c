#include "libft.h"

size_t digitcount(long n)
{
    size_t digits = 0;
    if (n <= 0)
    {
        digits++;
        n = -n;
    }
    while (n > 0)
    {
        digits++;
        n /= 10;
    }
    return (digits);
}

char *ft_itoa(int n)
{
    long nlong;
    size_t digits;
    char *str;

	nlong = n;
	digits = digitcount(nlong);
	str = (char *)malloc(digits + 1);
    if (str == NULL)
    	return NULL;
    str[digits] = '\0';
    if (nlong < 0)
    {
        str[0] = 45;
        nlong *= -1;
    }
    if (nlong == 0) 
        str[0] = '0';
    while (nlong > 0)
    {
        str[--digits] = (nlong % 10) + '0';
        nlong /= 10;
    }
    return (str);
}
