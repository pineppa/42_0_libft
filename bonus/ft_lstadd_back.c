#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	t = (t_list *)malloc(sizeof(t_list));
	t = *lst;
	while (t->next != NULL)
		t = t->next;
	t->next = new;
}