/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdionna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 22:58:45 by cdionna           #+#    #+#             */
/*   Updated: 2020/11/15 23:43:03 by cdionna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dup;
	t_list	*p;

	if (lst == 0 || f == 0)
		return (0);
	if (!(dup = ft_lstnew((*f)(lst->content))))
		return (0);
	p = dup;
	while (lst->next)
	{
		lst = lst->next;
		if (!(dup->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&p, del);
			return (0);
		}
		dup = dup->next;
	}
	return (p);
}
