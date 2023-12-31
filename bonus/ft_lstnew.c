#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (struct s_list *)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->content = content;
	return (elem);
}
