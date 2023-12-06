/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:29:24 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/23 15:29:26 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*first_node;
	t_list	*second_node;
	int		temp_content;
	int		temp_index;

	if (ft_lstsize(*lst) < 2)
		return ;
	first_node = *lst;
	second_node = first_node->next;
	temp_content = first_node->content;
	temp_index = first_node->index;
	first_node->content = second_node->content;
	first_node->index = second_node->index;
	second_node->content = temp_content;
	second_node->index = temp_index;
}

void	sa(t_list **a_stack)
{
	ft_swap(a_stack);
	write(1, "sa\n", 3);
}

void	sb(t_list **b_stack)
{
	ft_swap(b_stack);
	write(1, "sb\n", 3);
}

void	ss(t_list **a_stack, t_list **b_stack)
{
	ft_swap(a_stack);
	ft_swap(b_stack);
	write(1, "ss\n", 3);
}
