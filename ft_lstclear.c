#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*foll;

	if (lst && *lst)
	{
		curr = *lst;
		while (curr)
		{
			foll = curr->next;
			del(curr->content);
			free(curr);
			curr = foll;
		}
		*lst = NULL;
	}
}