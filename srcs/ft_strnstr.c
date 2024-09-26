/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:10:28 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:56:25 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			ret = (char *)(haystack) + i;
			while (haystack[i + j] && needle[j] && (i + j)
				< len && haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return (ret);
			j = 0;
		}
		i++;
	}
	return (0);
}
