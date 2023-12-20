#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

