/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:35:34 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/13 10:35:35 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	if (lst == NULL)
		return (NULL);
	newlst = NULL;
	newnode = NULL;
	while (lst != NULL)
	{
		if (f == NULL)
			newnode = ft_lstnew(lst->content);
		else
			newnode = ft_lstnew(f(lst->content));
		if (newnode == NULL)
			return (ft_lstclear(&newlst, del), NULL);
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
