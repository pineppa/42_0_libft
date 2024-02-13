/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:03:27 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 14:03:27 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (n < 0 || dest == src)
		return (0);
	i = -1;
	while (++i < n)
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
	return (dest);
}
