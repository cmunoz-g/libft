/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:10:03 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:35:31 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*sh;

	i = 0;
	ch = c;
	sh = (unsigned char *)s;
	while (i < n)
	{
		if (sh[i] == ch)
			return (sh + i);
		i++;
	}
	return (0);
}
