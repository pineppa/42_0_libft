/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:26:10 by jsala             #+#    #+#             */
/*   Updated: 2024/01/01 22:17:38 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list  *temp;

	temp = (t_list *)malloc(sizeof(t_list *));
	temp = *lst;
	while (temp->next)
	{
		del(temp->content);
		temp = temp->next;
		temp->next = NULL;
		 = temp; //Should it clear next too or not?
	}
}
