#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *arr;

    arr = s;
    while (n > 0)
    {
        *arr = c;
        arr++;
        n--;
    }
    return (s);
}