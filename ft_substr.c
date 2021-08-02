/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:13:55 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/07 14:14:28 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dup;

	if (s == 0)
		return (NULL);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (!(dup = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	dup = ft_memcpy(dup, &s[start], len);
	dup[len] = '\0';
	return (dup);
}
