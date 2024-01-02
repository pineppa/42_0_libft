/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:20:16 by jsala             #+#    #+#             */
/*   Updated: 2024/01/02 13:31:00 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*csrc;
	char	*cdest;
	size_t	i;

	temp = malloc(sizeof(char) * ft_strlen(src));
	if (temp == NULL)
		return (NULL);
	csrc = (char *) src;
	cdest = (char *) dest;
	i = -1;
	while (++i < n)
		temp[i] = csrc[i];
	i = -1;
	while (++i < n)
		cdest[i] = temp[i];
	return (dest);
}
