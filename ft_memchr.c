/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:16:10 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/11 18:09:31 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	a;
	int				i;

	i = 0;
	a = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (n > 0)
	{
		if (tmp[i] == a)
			return (tmp + i);
		n--;
		i++;
	}
	return (NULL);
}
