/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:31:49 by cdionna           #+#    #+#             */
/*   Updated: 2020/10/29 15:33:28 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	unsigned char	*p_d;
	unsigned char	*p_s;

	i = 0;
	j = 0;
	p_d = (unsigned char *)dst;
	p_s = (unsigned char *)src;
	while (p_d[i] != '\0' && i < dstsize)
		i++;
	while (p_s[j] != '\0' && (i + j + 1 < dstsize))
	{
		p_d[i + j + 1] = '\0';
		p_d[i + j] = p_s[j];
		j++;
	}
	return (ft_strlen(src) + i);
}
