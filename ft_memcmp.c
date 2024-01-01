/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:20:08 by jsala             #+#    #+#             */
/*   Updated: 2024/01/01 14:24:35 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	i = 0;
	arr1 = (unsigned char *) str1;
	arr2 = (unsigned char *) str2;
	while (arr1[i] == arr2[i] && arr1[i] && arr2[i] && i < n)
		i++;
	return (arr1[i] - arr2[i]);
}
