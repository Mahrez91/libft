/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:49:35 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/16 14:49:54 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t		i;
	size_t		count;
	int			a;

	a = 0;
	i = ft_strlen(dst) + ft_strlen(src);
	if (n <= ft_strlen(dst))
		return (ft_strlen(src) + n);
	count = 0;
	while (*dst)
		dst++;
	while ((count < n - (i - ft_strlen(src)) - 1) && src[a] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (i);
}
