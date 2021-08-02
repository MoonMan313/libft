/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:46:22 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/08 20:46:25 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_let(char const *sr, char ch, int i)
{
	while (sr[i] != ch && sr[i])
		i++;
	return (i);
}

int		ft_ch_split(char const *sr, char ch, int i)
{
	while (sr[i] == ch && sr[i])
		i++;
	return (i);
}

int		ft_count_word(const char *st, char ch)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while (st[i])
	{
		i = ft_ch_split(st, ch, i);
		i = ft_let(st, ch, i);
		++n;
	}
	return (n);
}

char	**ft_ar_free(char **ar)
{
	int i;

	i = 0;
	while (ar[i])
	{
		free(ar[i]);
		++i;
	}
	free(ar);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ar;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == 0)
		return (0);
	if (!(ar = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1))))
		return (0);
	if (ft_ch_split(s, c, i) != (int)ft_strlen(s))
	{
		while (s[i])
		{
			i = ft_ch_split(s, c, i);
			if (!(ar[j++] = ft_substr(s, i, ft_let(s, c, i) - i)))
				return (ft_ar_free(ar));
			i = ft_let(s, c, i);
			i = ft_ch_split(s, c, i);
		}
	}
	ar[j] = 0;
	return (ar);
}
