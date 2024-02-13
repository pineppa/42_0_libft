/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:04:10 by jsala             #+#    #+#             */
/*   Updated: 2024/01/09 15:31:26 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*begin;
	void	*data;

	if (!lst || !f || !del)
		return (0);
	begin = NULL;
	while (lst)
	{
		data = f(lst->content);
		new_list = ft_lstnew(data);
		if (!new_list)
		{
			del(data);
			ft_lstclear(&begin, del);
			return (0);
		}
		ft_lstadd_back(&begin, new_list);
		lst = lst->next;
	}
	new_list->next = NULL;
	return (begin);
}
