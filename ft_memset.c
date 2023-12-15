void    *ft_memset(void *str, int c, size_t n)
{
    unsigned char *cpy;

    cpy = str;
    while (n > 0)
    {
        *cpy = (unsigned char)c;
        cpy++;
        n--;
    }
    return (str);
}