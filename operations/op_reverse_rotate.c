/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:30:11 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/23 15:30:13 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **lst)
{
	int	i;

	if (ft_lstsize(*lst) < 2)
		return ;
	i = 0;
	while (i < ft_lstsize(*lst) - 1)
	{
		ft_rotate(lst);
		i++;
	}
}

void	rra(t_list **a_stack)
{
	ft_reverse_rotate(a_stack);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b_stack)
{
	ft_reverse_rotate(b_stack);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a_stack, t_list **b_stack)
{
	ft_reverse_rotate(a_stack);
	ft_reverse_rotate(b_stack);
	write(1, "rrr\n", 4);
}
