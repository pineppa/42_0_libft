/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:02:38 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 16:03:00 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_matrix(char **matrix, int size)
{
	while (size >= 0)
		free(matrix[size--]);
	free(matrix);
	return (NULL);
}

size_t	ft_wordcount(char const *str, char c)
{
	size_t	count;

	if (!*str)
		return (0);
	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_len;
	int		i;

	res = (char **)ft_calloc((ft_wordcount(s, c) + 1), sizeof(char *));
	if (!s || !res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			res[i++] = ft_substr(s, 0, word_len);
			if (!res[i - 1])
				return (free_matrix(res, i - 1));
			s += word_len;
		}
	}
	return (res);
}
