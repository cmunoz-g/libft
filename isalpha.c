int ft_isalpha(char c)
{
    if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
        return (1);
    else 
        return (0);
}