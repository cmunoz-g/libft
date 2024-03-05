/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:10:19 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:10:20 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*cpy;

	size = ft_strlen(s) + 1;
	cpy = (char *)malloc(size);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, size);
	return (cpy);
}
