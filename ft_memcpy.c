/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:09:02 by cdionna           #+#    #+#             */
/*   Updated: 2020/10/31 18:10:39 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *p_src;
	unsigned char *p_dst;

	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dst;
	if (!n || p_src == p_dst)
		return (dst);
	while (n--)
	{
		*p_dst = *p_src;
		p_dst++;
		p_src++;
	}
	return (dst);
}
