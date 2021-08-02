/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:44:36 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/07 17:44:39 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isset(char c, char const *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int		ft_start(char const *s_s, char const *set_s)
{
	int i;

	i = 0;
	while (s_s[i] && ft_isset(s_s[i], set_s))
		i++;
	return (i);
}

int		ft_end(char const *s_e, char const *set_e)
{
	int i;

	i = ft_strlen(s_e) - 1;
	while (i != 0 && ft_isset(s_e[i], set_e))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dup;

	if (s1 == set || set == 0 || s1 == 0)
		return (0);
	start = ft_start(s1, set);
	end = ft_end(s1, set) - start;
	if (start == ft_strlen(s1) || !end)
	{
		if (!(dup = malloc(sizeof(char))))
			return (0);
		*dup = '\0';
		return (dup);
	}
	return (ft_substr(s1, start, end + 1));
}
