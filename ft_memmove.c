/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:20:16 by jsala             #+#    #+#             */
/*   Updated: 2024/01/04 12:55:03 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;
	size_t			i;

	c_src = (unsigned char *) src;
	c_dest = (unsigned char *) dest;
	if (!c_src || !c_dest)
		return (NULL);
	i = 0;
	if (c_dest < c_src)
		while (i++ < n)
			*(c_dest++) = *(c_src++);
	else
		while (n-- > 0)
			c_dest[n] = c_src[n];
	return (dest);
}
