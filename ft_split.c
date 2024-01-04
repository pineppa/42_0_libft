/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:15:30 by jsala             #+#    #+#             */
/*   Updated: 2024/01/03 17:57:24 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] != c && (str[i + 1] == 0 || str[i + 1] == c))
			words++;
	}
	return (words);
}

void	ft_write_word(char *dest, const char *from, char c)
{
	int	i;

	i = 0;
	while (from[i] != c && from[i])
	{
		dest[i] = (char) from[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_write_str(char **split, const char *str, char c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c)
				j++;
			split[word] = (char *)malloc(sizeof (char) * (j + 1));
			ft_write_word(split[word], str + i, c);
			i += j;
			word++;
		}
	}
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		words;

	words = count_words(s, c);
	res = (char **) malloc(sizeof (char *) * (words + 1));
	if (!res)
		return (NULL);
	ft_write_str(res, s, c);
	res[words] = 0;
	return (res);
}
