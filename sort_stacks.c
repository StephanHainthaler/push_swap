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

int	get_smallest_index(t_list *lst)
{
	int	min;

	min = INT_MAX;
	while (lst)
	{
		if (lst->index < min)
			min = lst->index;
		if (lst->next == NULL)
			return (min);
		lst = lst->next;
	}
	return (min);
}

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
	write(1, "\n", 1);
	if (ft_lstsize(a_stack) == 1)
		return ;
	if (ft_lstsize(a_stack) == 2)
		two_sort(&a_stack);
	if (ft_lstsize(a_stack) == 3)
		three_sort(&a_stack);
	if (ft_lstsize(a_stack) == 4)
		four_sort(&a_stack, &b_stack);
	if (ft_lstsize(a_stack) == 5)
		five_sort(&a_stack, &b_stack);
	if (ft_lstsize(a_stack) >= 6)
		radix_sort(&a_stack, &b_stack);
	write(1, "\n", 1);
}
