#include "libft.h"

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
