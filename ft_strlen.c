int ft_strlen(char *str)
{
	int	c;

	while (*str++)
		c++;
	return (c);	
}