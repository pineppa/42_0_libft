/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:25:36 by jsala             #+#    #+#             */
/*   Updated: 2024/01/04 14:20:01 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchk(char c, const char *set)
{
	int	count;

	count = -1;
	while (set[++count])
	{
		if (c == set[count])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tr_str;
	int		lp;
	int		rp;
	int		i;

	lp = 0;
	while (s1[lp] && ft_strchk(s1[lp], set))
		lp++;
	rp = ft_strlen(s1) - 1;
	while (rp >= 0 && ft_strchk(s1[rp], set))
		rp--;
	if (rp - lp >= 0)
		tr_str = malloc(sizeof(char) * (rp - lp + 2));
	else
		tr_str = malloc(sizeof(char) * 1);
	if (!tr_str)
		return (NULL);
	i = -1;
	while (++i <= rp - lp)
		tr_str[i] = s1[lp + i];
	tr_str[i] = '\0';
	return ((char *)tr_str);
}
