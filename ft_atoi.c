/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:54:11 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/01 21:55:39 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_isspase(const char *s)
{
	while (*s && (*s == ' ' || *s == '\t' || *s == '\v'
			|| *s == '\r' || *s == '\n' || *s == '\f'))
		++s;
	return ((char *)s);
}

int		ft_atoi(const char *str)
{
	int value;
	int n_p;
	int i;

	n_p = 1;
	value = 0;
	i = 0;
	str = ft_isspase(str);
	if (*str == '-')
		n_p = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str > 47 && *str < 58)
	{
		value = value * 10 + (int)(*str - 48);
		++str;
		++i;
		if (i > 19 && n_p > 0)
			return (-1);
		if (i > 19 && n_p < 0)
			return (0);
	}
	return (n_p * value);
}
