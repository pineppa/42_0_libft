/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:01:58 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 14:01:59 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	unsigned int	l_dest;
	unsigned int	l_src;

	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	if (size > l_dest)
		res = l_dest + l_src;
	else
		res = l_src + size;
	l_src = 0;
	while (l_dest + 1 < size && src[l_src])
	{
		dest[l_dest] = src[l_src];
		l_dest++;
		l_src++;
	}
	dest[l_dest] = '\0';
	return (res);
}
