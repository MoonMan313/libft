/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:35:59 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/04 16:38:13 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *p_dst;
	unsigned char *p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (!len || p_src == p_dst)
		return (dst);
	if (src <= dst)
	{
		while (len--)
			p_dst[len] = p_src[len];
	}
	else
	{
		while (len--)
		{
			*p_dst = *p_src;
			p_dst++;
			p_src++;
		}
	}
	return (dst);
}
