/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:42:58 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 14:49:38 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	val;
	int	sign;
	int	i;

	val = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v') && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -sign;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
		val = 10 * val + (str[i++] - '0');
	return (val * sign);
}
