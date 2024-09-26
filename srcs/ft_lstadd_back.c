/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:09:49 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:09:50 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*it;

	if (new && lst)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			it = ft_lstlast(*lst);
			it->next = new;
		}
	}
}
