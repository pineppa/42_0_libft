#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *csrc = (char *) src;
    char    *cdest = (char *) dest;
    int     i;

    i = -1;
    while (++i < n)
        cdest[i] = csrc[i];
    return (dest);
}