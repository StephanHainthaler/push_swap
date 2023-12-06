/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:32:58 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/23 11:32:59 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_biggest_index(t_list *lst)
{
	int	max;

	max = 0;
	while (lst)
	{
		if (lst->index > max)
			max = lst->index;
		if (lst->next == NULL)
			return (max);
		lst = lst->next;
	}
	return (max);
}

bool	is_sorted(t_list *lst)
{
	int	smaller_index;

	smaller_index = 0;
	while (lst)
	{
		if (lst->index < smaller_index)
			return (false);
		if (lst->next == NULL)
			return (true);
		smaller_index = lst->index;
		lst = lst->next;
	}
	return (true);
}

void	sort_stack(t_list *a_stack)
{
	t_list	*b_stack;

	b_stack = NULL;
	ft_putlst_fd(a_stack, 1);
	write(1, "\n", 1);
	if (ft_lstsize(a_stack) == 1)
		return ;
	if (ft_lstsize(a_stack) == 2)
		two_sort(&a_stack);
	if (ft_lstsize(a_stack) == 3)
		three_sort(&a_stack);
	// if (ft_lstsize(a_stack) == 4)
	// 	four_sort(&a_stack, &b_stack);
	// if (ft_lstsize(a_stack) == 5)
	// 	five_sort(&a_stack, &b_stack);
	// if (ft_lstsize(a_stack) <= 6)
	// 	radix_sort(&a_stack, &b_stack);
	radix_sort(&a_stack, &b_stack);
	ft_putlst_fd(a_stack, 1);
	write(1, "\n", 1);
	// ft_putlst_fd(b_stack, 1);
	// write(1, "\n", 1);
}
