/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_types.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:48:29 by shaintha          #+#    #+#             */
/*   Updated: 2023/12/05 14:48:31 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_sort(t_list **a_stack)
{

}

void	three_sort(t_list **a_stack, t_list **b_stack)
{

}

void	four_sort(t_list **a_stack, t_list **b_stack)
{

}

void	five_sort(t_list **a_stack, t_list **b_stack)
{

}

void	radix_sort(t_list **a_stack, t_list **b_stack)
{
	t_list	*current_node;
	int		node_size;
	int		i;
	int		j;

	current_node = *a_stack;
	node_size = ft_lstsize(current_node);
	i = 0;
	while (i < get_biggest_index(*a_stack))
	{
		if (is_sorted(*a_stack) == true)
			return ;
		j = 0;
		while (j++ < node_size)
		{
			current_node = *a_stack;
			if (((current_node->index >> i) & 1) == 0)
				pb(a_stack, b_stack);
			else
				ra(a_stack);
		}
		while (ft_lstsize(*b_stack) >= 1)
			pa(a_stack, b_stack);
		i++;
	}
}
