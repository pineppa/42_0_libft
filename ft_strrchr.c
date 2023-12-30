char *ft_strrchr(const char *s, int c)
{
	char	*r;

	*r = 0;
	while (*s)
	{
		if (*s++ == c)
			r = s;
	}
	return (r);
}