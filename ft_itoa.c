#include "libft.h"

int     num_digits(int n)
{
	int size;

	size = 1;
	if (n >= 0)
	{
		size--;
		n *= -1;
	}
	while (n < 0)
	{
		n = n / 10;
		size++;   
	}
	return (size);
}

char	get_digit(int n)
{
	while (n > 10)
		n = n / 10;
	return (n);
}

char    *ft_itoa(int n)
{
	char    *str;
	int		n_dig;

	str = malloc(sizeof(char) * (num_digits(n) + 1));
	if (!str)
		return(NULL);
	if (n > 0)
		n = n * -1;
	else
	{
		*str = '-';
		str++;
	}
	while (n > 9)
	{
		*str = get_digit(n) + '0';
		str++;
		n = n / 10; 
	}
	*str = get_digit(n) + '0';
	return (str);
}