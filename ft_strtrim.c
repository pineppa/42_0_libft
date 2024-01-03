/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:25:36 by jsala             #+#    #+#             */
/*   Updated: 2024/01/03 11:52:23 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
	while (rp > 0 && ft_strchk(s1[rp], set))
		rp--;
	tr_str = malloc(sizeof(char) * (rp - lp + 2));
	if (!tr_str)
		return (NULL);
	i = 0;
	while (i <= rp - lp)
	{
		tr_str[i] = s1[lp + i];
		i++;
	}
	tr_str[i] = 0;
	return ((char *)tr_str);
}

/*
int	main(void)
{
	char *str;

	str = malloc(50);
	str = ft_strtrim("lorem ipsum dolor sit amet", " ");
	printf("The return of ft_strtrim is %s\n", str);
	return (0);
}
*/