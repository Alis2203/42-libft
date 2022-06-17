/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastel <alcastel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:46:54 by alcastel          #+#    #+#             */
/*   Updated: 2022/06/08 19:51:54 by alcastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*tmp;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		aux = ft_lstnew(tmp);
		if (!aux)
		{
			del(tmp);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, aux);
		lst = lst->next;
	}
	return (first);
}
