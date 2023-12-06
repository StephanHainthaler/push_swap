/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:29:34 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/23 15:29:35 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **lst)
{
	if (ft_lstsize(*lst) < 2)
		return ;
	while (lst != NULL)
	{
		ft_swap(lst);
		if ((*lst)->next == NULL)
			break ;
		lst = &(*lst)->next;
	}
}

void	ra(t_list **a_stack)
{
	ft_rotate(a_stack);
	write(1, "ra\n", 3);
}

void	rb(t_list **b_stack)
{
	ft_rotate(b_stack);
	write(1, "rb\n", 3);
}

void	rr(t_list **a_stack, t_list **b_stack)
{
	ft_rotate(a_stack);
	ft_rotate(b_stack);
	write(1, "rr\n", 3);
}
