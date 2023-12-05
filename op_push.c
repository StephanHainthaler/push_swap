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

int	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*first_node;
	t_list	*new;
	int		temp_content;
	int		temp_index;

	if (ft_lstsize(*lst1) < 1)
		return (-1);
	first_node = *lst1;
	temp_content = first_node->content;
	temp_index = first_node->index;
	new = ft_lstnew(temp_content, temp_index);
	if (new == NULL)
		return (-1);
	ft_lstadd_front(lst2, new);
	if (first_node != NULL)
		ft_lstdelone(lst1, first_node);
	return (0);
}

void	pa(t_list **a_stack, t_list **b_stack)
{
	if (ft_push(b_stack, a_stack) == -1)
	{
		if (a_stack)
			ft_lstclear(b_stack);
		if (b_stack)
			ft_lstclear(a_stack);
		write(2, "Error\n", 6);
		exit(1);
	}
	write(1, "pa\n", 3);
}

void	pb(t_list **a_stack, t_list **b_stack)
{
	if (ft_push(a_stack, b_stack) == -1)
	{
		if (b_stack)
			ft_lstclear(b_stack);
		if (a_stack)
			ft_lstclear(a_stack);
		write(2, "Error\n", 6);
		exit(1);
	}
	write(1, "pb\n", 3);
}
