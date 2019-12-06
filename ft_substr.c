/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:22:47 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/11 18:34:58 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	char			*tmp;

	if (!s || !*s || start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (!(str = malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	i = 0;
	tmp = (char *)s;
	while (i < len)
	{
		str[i] = tmp[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
