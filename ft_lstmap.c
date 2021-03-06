/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 10:49:02 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/24 12:36:35 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	tmp = new;
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstdelone(tmp, del);
			return (new);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}
