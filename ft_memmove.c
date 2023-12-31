#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp; // Isn't this very dangerous?
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *) src;
	cdest = (char *) dest;
	i = -1;
	while (++i < n)
		temp[i] = csrc[i];
	i = -1;
	while (++i < n)
		cdest[i] = temp[i];
	return (dest);
}
