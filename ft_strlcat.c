/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:10:22 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/21 20:28:13 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	j = destlen;
	i = 0;
	if (destsize <= destlen)
		return (srclen + destsize);
	else
	{
		while (src[i] && j < (destsize - 1))
			dest[j++] = src[i++];
		dest[j] = '\0';
		return (srclen + destlen);
	}
}
