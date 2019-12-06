/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idhiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:16:23 by idhiba            #+#    #+#             */
/*   Updated: 2019/11/16 14:47:04 by idhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i = 1;
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char		*ft_strrev(char *str, int a)
{
	int		i;
	char	tmp;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (a < i)
	{
		tmp = str[a];
		str[a] = str[i];
		str[i] = tmp;
		i--;
		a++;
	}
	return (str);
}

static char		*ft_write(char *str, int n, int i)
{
	char *alpha;

	alpha = "0123456789";
	if (n == 0)
	{
		str[i] = '0';
		return (str);
	}
	while (n > 0)
	{
		str[i] = alpha[n % 10];
		i++;
		n = n / 10;
	}
	str[i] = '\0';
	return (str);
}

static char		*ft_write_min(char *str)
{
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		a;

	if (!(str = (char*)malloc(sizeof(char) * (ft_count(n) + 1))))
		return (NULL);
	if (n == -2147483648)
		return (ft_write_min(str));
	a = 0;
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		i++;
		a = 1;
		n = n * (-1);
	}
	str = ft_write(str, n, i);
	return (ft_strrev(str, a));
}
