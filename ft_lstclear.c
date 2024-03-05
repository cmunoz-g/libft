/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:09:52 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:09:53 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
