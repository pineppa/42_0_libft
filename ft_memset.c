/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:03:16 by jsala             #+#    #+#             */
/*   Updated: 2024/01/10 19:39:08 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	arr = (unsigned char *) s;
	i = 0;
	while (i < n)
		arr[i++] = (unsigned char) c;
	return (s);
}
