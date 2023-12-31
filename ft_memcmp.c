#include "libft.h"

int	memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	i = 0;
	arr1 = (unsigned char *) str1;
	arr2 = (unsigned char *) str2;
	while (arr1[i] == arr2[i] && arr1[i] && arr2[i] && i < n)
		i++;
	return (arr1[i] - arr2[i]);
}
