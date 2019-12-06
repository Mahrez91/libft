/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:37:26 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/11 18:32:36 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t n)
{
	unsigned int pos;
	unsigned int i;

	if (!*src)
		return ((char*)dest);
	pos = 0;
	while (dest[pos] != '\0' && (size_t)pos < n)
	{
		if (dest[pos] == src[0])
		{
			i = 1;
			while (src[i] != '\0' && dest[pos + i] == src[i] &&
			(size_t)(pos + i) < n)
				i++;
			if (src[i] == '\0')
				return ((char*)&dest[pos]);
		}
		++pos;
	}
	return (0);
}
