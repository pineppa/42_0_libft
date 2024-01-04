/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:25:25 by jsala             #+#    #+#             */
/*   Updated: 2024/01/03 17:06:47 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	size_t			s_len;
	char			*str;

	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * s_len + 1);
	if (!str)
		return (NULL);
	count = 0;
	while (s[count] && count < s_len)
	{
		str[count] = f(count, s[count]);
		count++;
	}
	str[count] = 0;
	return (str);
}
