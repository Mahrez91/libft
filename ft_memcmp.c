/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:39:31 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/11 18:10:36 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *chaine1;
	unsigned char *chaine2;

	chaine1 = (unsigned char *)s1;
	chaine2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (*chaine1 == *chaine2 && n > 1)
	{
		chaine1++;
		chaine2++;
		n--;
	}
	return (*chaine1 - *chaine2);
}
