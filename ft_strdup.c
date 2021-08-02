/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:29:35 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/02 19:18:48 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;

	dup = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!dup)
		return (0);
	return (ft_memcpy(dup, s1, ft_strlen(s1) + 1));
}
