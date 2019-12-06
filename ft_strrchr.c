/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:33:50 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/11 18:33:29 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	tmp = (char *)s;
	i = 0;
	while (tmp[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (tmp[i] == c)
			return (tmp + i);
		i--;
	}
	return (NULL);
}
