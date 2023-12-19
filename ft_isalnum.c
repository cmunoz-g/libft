#include "libft.h"

int ft_isalnum(char c)
{
    if (c >= 48 && c <= 57) 
        return (1);
    else if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}