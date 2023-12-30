#include <string.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *arr;

    arr = s;
    while (n > 0)
    {
        *arr = 0;
        arr++;
        n--;
    }
    return (s);
}