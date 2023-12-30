int	ft_atoi(char *str)
{
	int	val;
	int	sign;

	val = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v') && *str)
		str++;
	//while ((*str == '+' || *str == '-') && *str)
	//{
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
	}
	str++;
	//}
	while ((*str >= '0' && *str <= '9') && *str)
	{
		val = 10 * val + (*str - '0');
		str++;
	}
	return (val * sign);
}
