#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*it;

	i = 0;
	it = lst;
	while (it)
	{
		i++;
		it = it->next;
	}
	return (i);
}
