/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:02:47 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/04 16:41:40 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*p_h;
	unsigned char	*p_n;

	i = 0;
	j = 0;
	p_h = (unsigned char *)haystack;
	p_n = (unsigned char *)needle;
	if (p_h == p_n || (p_n[i] == '\0' && len == 0))
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while ((i < len) && p_h[i])
	{
		while (p_h[i + j] == p_n[j] && (i + j) < len && p_h[i + j])
			++j;
		if (p_n[j] == '\0')
			return ((char *)(haystack + i));
		j = 0;
		++i;
	}
	return ((char *)0);
}
