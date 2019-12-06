/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:22:43 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/11 18:08:51 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		stop;
	const char	*tmp;
	char		*fin;
	int			i;

	stop = (char)c;
	tmp = (const char *)src;
	fin = (char *)dest;
	i = 0;
	while (n > 0)
	{
		fin[i] = tmp[i];
		if (tmp[i] == stop)
		{
			return (fin + i + 1);
		}
		i++;
		n--;
	}
	return (0);
}
