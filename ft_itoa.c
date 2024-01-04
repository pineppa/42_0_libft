/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:19:59 by jsala             #+#    #+#             */
/*   Updated: 2024/01/04 14:42:04 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ndigits(int n)
{
	int	count;

	count = 1;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_reverse(char *str)
{
	char	c;
	int		s_len;
	int		i;

	i = -1;
	s_len = ft_strlen(str);
	while (i < s_len / 2)
	{
		c = str[i];
		str[i] = str[s_len - 1 - i];
		str[s_len - i - 1] = c;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		i;

	str = (char *)malloc(sizeof(char) * ft_ndigits(n));
	if (!str)
		return (NULL);
	i = 0;
	sign = -1;
	if (n >= 0)
	{
		n = n * -1;
		sign = 1;
		if (n == 0)
			str[i++] = '0';
	}
	while (n < 0)
	{
		str[i++] = -(n % 10) + '0';
		n /= 10;
	}
	if (sign < 0)
		str[i++] = '-';
	str[i] = 0;
	return (ft_reverse(str));
}
