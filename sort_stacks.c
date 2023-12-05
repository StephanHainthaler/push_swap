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

bool	is_lst_sorted(t_list *lst)
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
		return ;
	if (ft_lstsize(a_stack) == 3)
		return ;
	if (ft_lstsize(a_stack) == 4)
		return ;
	if (ft_lstsize(a_stack) == 5)
		return ;
	if (ft_lstsize(a_stack) <= 6)
		radix_sort(&a_stack, &b_stack);
	ft_putlst_fd(a_stack, 1);
	write(1, "\n", 1);
	ft_putlst_fd(b_stack, 1);
	write(1, "\n", 1);
	//ft_lstclear(&b_stack);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*lst1 = NULL;
// 	t_list	*lst2 = NULL;
// 	t_list	*new1 = ft_lstnew(1, 1);
// 	t_list	*new2 = ft_lstnew(2, 2);
// 	t_list	*new3 = ft_lstnew(3, 3);
// 	t_list	*new4 = ft_lstnew(4, 4);
// 	t_list	*new5 = ft_lstnew(5, 5);

// 	ft_lstadd_front(&lst1, new1);
// 	ft_lstadd_front(&lst1, new2);
// 	ft_lstadd_back(&lst1, new3);
// 	ft_lstadd_back(&lst1, new4);
// 	ft_lstadd_back(&lst1, new5);

// 	printf("The content of lst1:\n");
// 	ft_putlst_fd(lst1, 1);
// 	write(1, "\n", 1);

// 	printf("Pushing the first element from lst1 to lst2:\n");
// 	ft_push(&lst1, &lst2);
// 	ft_putlst_fd(lst1, 1);
// 	write(1, "\n", 1);
// 	ft_putlst_fd(lst2, 1);
// 	write(1, "\n", 1);

// 	printf("Pushing the first element from lst2 to lst1:\n");
// 	ft_push(&lst2, &lst1);
// 	ft_putlst_fd(lst1, 1);
// 	write(1, "\n", 1);
// 	ft_putlst_fd(lst2, 1);
// 	write(1, "\n", 1);

// 	ft_lstclear(&lst1);
// 	return (0);
// }
