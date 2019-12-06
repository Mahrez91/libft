/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:01:13 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/11 18:25:56 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char const *s1, char const *s2)
{
	int i;
	int e;

	i = 0;
	e = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[e] != '\0')
	{
		e++;
		i++;
	}
	i = i + 2;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		e;
	int		i;
	char	*str;

	e = 0;
	i = ft_count(s1, s2);
	if (!(str = malloc(sizeof(*str) * i)))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[e] != '\0')
	{
		str[i] = s2[e];
		i++;
		e++;
	}
	str[i] = '\0';
	return (str);
}
