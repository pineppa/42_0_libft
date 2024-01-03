/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:25:40 by jsala             #+#    #+#             */
/*   Updated: 2024/01/03 10:43:09 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	i = -1;
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	if (start > s_len)
	{
		cpy[0] = 0;
		return (cpy);
	}
	while (++i < len && s[start + i])
		cpy[i] = s[start + i];
	cpy[i] = 0;
	return (cpy);
}
