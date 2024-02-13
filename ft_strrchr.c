/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:00:27 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 14:00:39 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			r = (char *)s + i;
		i++;
	}
	if ((char)c == '\0')
		r = (char *)s + i;
	return (r);
}
