/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:03:22 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 14:53:19 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
		while (n-- > 0)
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
	return (dest);
}
