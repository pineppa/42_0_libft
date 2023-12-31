#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;

	arr = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*arr == c)
			return (arr);
		arr++;
	}
	return (NULL);
}
