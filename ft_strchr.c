/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:44:13 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/15 17:17:43 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	int		i;
	int		a;

	a = 0;
	tmp = (char *)s;
	i = 0;
	while (tmp[a] != '\0')
		a++;
	if (c == '\0')
		return (tmp + a);
	while (tmp[i] != '\0')
	{
		if (tmp[i] == c)
			return (tmp + i);
		i++;
	}
	return (NULL);
}
