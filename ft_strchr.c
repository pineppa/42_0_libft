char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s++ == c)
			return s;
	}
	return (0);
}