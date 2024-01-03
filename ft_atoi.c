/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:19:15 by jsala             #+#    #+#             */
/*   Updated: 2024/01/03 09:06:54 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	val;
	int	sign;

	val = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v') && *str)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str)
	{
		val = 10 * val + (*str - '0');
		str++;
	}
	return (val * sign);
}
