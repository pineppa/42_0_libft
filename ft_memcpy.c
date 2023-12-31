#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *) src;
	cdest = (char *) dest;
	i = -1;
	while (++i < n)
		cdest[i] = csrc[i];
	return (dest);
}
