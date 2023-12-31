#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	while (start + i < len)
	{
		cpy[i] = s[start + i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
