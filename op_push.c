/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:29:19 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/23 15:29:20 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*first_node;
	t_list	*new;
	int		temp_content;
	int		temp_index;

	if (ft_lstsize(*lst1) < 1)
		return ;
	first_node = *lst1;
	temp_content = first_node->content;
	temp_index = first_node->index;
	new = ft_lstnew(temp_content, temp_index);
	if (new == NULL)
		return ;
	ft_lstadd_front(lst2, new);
	if (first_node != NULL)
		ft_lstdelone(lst1, first_node);
}

void	pa(t_list **a_stack, t_list **b_stack)
{
	ft_push(b_stack, a_stack);
	write(1, "pa\n", 3);
}

void	pb(t_list **a_stack, t_list **b_stack)
{
	ft_push(a_stack, b_stack);
	write(1, "pb\n", 3);
}
