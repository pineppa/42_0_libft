/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:19:59 by jsala             #+#    #+#             */
/*   Updated: 2024/01/03 08:47:48 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_reverse(char *str)
{
	int		len;
	int		i;
	char	*rev;

	i = -1;
	len = ft_strlen(str);
	rev = malloc(sizeof(char) * (len + 1));
	if (!rev)
		return (NULL);
	while (++i < len)
		rev[len - i - 1] = str[i];
	free(str);
	return (rev);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	sign;

	sign = '-';
	str = (char *) malloc(sizeof(char) * (12));
	if (!str)
		return (NULL);
	if (n > 0)
		n = n * -1;
	while (n > 9)
	{
		*str = n % 10 + '0';
		str++;
		n = n / 10;
	}
	*str = n + '0';
	if (n > 0)
	{
		str++;
		*str = sign;
	}
	return (ft_reverse(str));
}
