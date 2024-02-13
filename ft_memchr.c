/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:03:43 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 14:53:19 by jsala            ###   ########.fr       */
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
