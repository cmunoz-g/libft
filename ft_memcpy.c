void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destcpy;
    unsigned const char *srccpy;

    destcpy = dest;
    srccpy = src;
    while (n > 0)
    {
        *destcpy = *srccpy;
        n--;
        destcpy++;
        srccpy++;
    }
    return (dest);
}