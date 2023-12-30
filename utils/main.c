#include "ft.h"
#include <stdio.h>
#include <ctype.h>

int ft_strlen(char *str)
{
	int	c;

	while (*str++)
		c++;
	return (c);	
}

int	main(int argc, char **argv)
{
	int count;

	count = 1;
	while (count < argc)
	{
		if (ft_strlen(*argv))
		{
			printf("%c is alpha? %d", *argv, ft_isalpha(argv[count]));
			printf("%c is alpha-numerical? %d", argv[count], ft_isalnum(argv[count]));
			printf("%c is digit? %d", argv[count], ft_isdigit(argv[count]));
			printf("%c is print? %d", argv[count], ft_isprint(argv[count]));
			printf("%c tolower -> %c", argv[count], ft_tolower(argv[count]));
			printf("%c toupper -> %c", argv[count], ft_toupper(argv[count]));
		}
		else
		{
			printf("%s strlcpy -> %s", argv[count], ft_strlcpy(argv[count]))
		}
	}
	return (0);
}