#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*it;

	if (new && lst)
	{
		new->next = NULL;
		if (!(*lst))
			*lst = new;
		else
		{
			it = *lst;
			while (it->next)
				it = it->next;
			it->next = new;
		}
	}
}
