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

void	ft_putbits(int nbr)
{
	
}

void	radix_sort(t_list *a_stack, t_list *b_stack)
{
	int index;
	int	max_index;

	max_index = get_biggest_index(a_stack);
	index = 1;

}


// t_list	*sort_stack(t_list *a_stack)
// {
// 	t_list	*b_stack;

// 	b_stack = NULL;
// 	radix_sort(a_stack, b_stack);
// 	return (a_stack);
// }
