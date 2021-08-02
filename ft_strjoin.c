/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:02:02 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/07 18:02:09 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	if (*s1 == '\0')
		return (ft_strdup(s2));
	if (*s2 == '\0')
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(buf = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (ft_strlcpy(buf, s1, len) && ft_strlcat(buf, s2, len + 1))
		return (buf);
	return (NULL);
}
