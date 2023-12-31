#include "libft.h"

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
