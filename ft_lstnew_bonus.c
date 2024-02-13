/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:04:02 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 14:04:03 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (struct s_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->next = NULL;
	elem->content = content;
	return (elem);
}
