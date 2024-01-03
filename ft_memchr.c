/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:20:03 by jsala             #+#    #+#             */
/*   Updated: 2024/01/03 08:52:41 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	letter;

	arr = (unsigned char *) s;
	letter = (unsigned char) c;
	while (n-- > 0)
	{
		if (*arr == letter)
			return (arr);
		arr++;
	}
	return (NULL);
}
