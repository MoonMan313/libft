/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:29:42 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/15 23:49:39 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*buf;

	if (!lst)
		return ;
	p = *lst;
	while (p && del && lst)
	{
		buf = p->next;
		del(p->content);
		free(p);
		p = buf;
	}
	*lst = NULL;
}
