#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*it;

	it = lst;
	if (!lst)
		return (NULL);
	while (it->next)
		it = it->next;
	return (it);
}
