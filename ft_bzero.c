#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	arr = s;
	i = -1;
	while (++i < n)
		arr[i] = 0;
}
