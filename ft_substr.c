/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:25:40 by jsala             #+#    #+#             */
/*   Updated: 2024/01/04 16:52:22 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
	{
		cpy = malloc(sizeof(char) * (1));
		if (!cpy)
			return (NULL);
		cpy[0] = 0;
		return (cpy);
	}
	if (len < s_len - start)
		cpy = malloc(sizeof(char) * (len + 1));
	else
		cpy = malloc(sizeof(char) * (s_len - start + 1));
	if (!cpy)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
		cpy[i] = s[start + i];
	cpy[i] = 0;
	return (cpy);
}
