/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:09:40 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:09:41 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	totalsize;

	totalsize = nmemb * size;
	if (nmemb != 0 && totalsize / nmemb != size)
		return (NULL);
	res = malloc(totalsize);
	if (res == NULL)
		return (NULL);
	ft_memset(res, 0, totalsize);
	return (res);
}
