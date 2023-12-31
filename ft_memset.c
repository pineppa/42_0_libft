#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	arr = s;
	i = -1;
	while (++i < n)
		arr[i] = c;
	return (s);
}
