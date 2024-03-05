/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:10:05 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:38:10 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destcpy;
	const unsigned char	*srccpy;

	destcpy = dest;
	srccpy = src;
	if (n == 0 || src == dest)
		return (dest);
	while (n > 0)
	{
		*destcpy = *srccpy;
		n--;
		destcpy++;
		srccpy++;
	}
	return (dest);
}
