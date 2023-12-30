#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     count;
    char    *str;

    count = 0;
    str = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return (NULL);
    while (*s)
    {
        str[count] = f(count, s[count]);
        s++;
    }
    return (str);
    
}