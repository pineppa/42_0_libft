/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jacopo.sala@student.barcelona.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:26:33 by jsala             #+#    #+#             */
/*   Updated: 2024/01/01 22:18:01 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*lst_begin;

	new_lst = (struct s_list *)malloc(sizeof(t_list));
	lst_begin = (struct s_list *)malloc(sizeof(t_list));
	if (!new_lst || !lst_begin)
		return (NULL);
	if (lst->content != NULL)
		new_lst->content = f(lst->content);
	lst_begin = new_lst;
	while (lst->next != NULL)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (lst_begin);
}
