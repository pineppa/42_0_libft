#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char    temp[n];
    char    *csrc = (char *) src;
    char    *cdest = (char *) dest;
    int     i;

    i = -1;
    while (++i < n)
        temp[i] = csrc[i];
    i = -1;
    while (++i < n)
        cdest[i] = temp[i];
    return (dest);
}