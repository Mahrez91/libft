/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:01:05 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/15 17:19:09 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;
	int		e;

	e = 0;
	i = 0;
	while (s[i] != '\0')
		i++;
	if (!(str = malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	while (e < i)
	{
		str[e] = s[e];
		e++;
	}
	str[e] = '\0';
	return (str);
}
