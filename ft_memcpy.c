/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:30:31 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/15 17:16:53 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*tmp;
	char		*fin;
	int			i;

	if (!dest && !src)
		return (NULL);
	tmp = (const char *)src;
	fin = (char *)dest;
	i = 0;
	while (n > 0)
	{
		fin[i] = tmp[i];
		i++;
		n--;
	}
	return (fin);
}
