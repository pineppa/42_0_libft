#include <string.h>

int memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *arr1;
	unsigned char *arr2;
	int	i;

	i = 0;
	arr1 = str1;
	arr2 = str2;
	while (arr1[i] == arr2[i] && arr1[i] && arr2[i])
		i++;
	return (arr1[i] - arr2[i]);
}