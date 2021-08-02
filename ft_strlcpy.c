/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:05:31 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/04 16:17:04 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned char	*p_d;
	unsigned char	*p_s;

	i = 0;
	p_d = (unsigned char *)dst;
	p_s = (unsigned char *)src;
	if (!dst)
		return (0);
	if (p_s == p_d || dstsize == 0)
		return (ft_strlen(src));
	while (p_s[i] && i < (dstsize - 1))
	{
		p_d[i] = p_s[i];
		i++;
	}
	p_d[i] = '\0';
	return (ft_strlen(src));
}
