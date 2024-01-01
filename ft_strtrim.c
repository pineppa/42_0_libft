/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:25:36 by jsala             #+#    #+#             */
/*   Updated: 2024/01/01 14:25:36 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen2(const char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

int	ft_strchk(char c, const char *set)
{
	int	count;

	count = 0;
	while (set[count])
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
	while (ft_strchk(s1[lp], set))
		lp++;
	rp = ft_strlen2(s1);
	while (ft_strchk(s1[rp], set))
		rp--;
	tr_str = malloc(sizeof(char) * (rp - lp + 1));
	if (!tr_str)
		return (NULL);
	i = -1;
	while (++i < rp - lp)
		tr_str[i] = s1[lp + i];
	return (tr_str);
}
