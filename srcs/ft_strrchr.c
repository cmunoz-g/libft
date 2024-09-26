/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-g <cmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:10:30 by cmunoz-g          #+#    #+#             */
/*   Updated: 2024/01/09 12:58:43 by cmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*lastc;
	char		ch;

	ch = (char)c;
	lastc = NULL;
	while (*str)
	{
		if (*str == ch)
			lastc = str;
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	else
		return ((char *)lastc);
}
