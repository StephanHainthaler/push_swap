/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:16:18 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/20 09:16:20 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*first_node;
	t_list	*second_node;
	int		temp;

	if (ft_lstsize(*lst) < 2)
		return ;
	first_node = *lst;
	second_node = first_node->next;
	temp = first_node->content;
	first_node->content = second_node->content;
	second_node->content = temp;
}

void	ft_push(t_list **lst1, t_list **lst2)
{
	t_list	*first_node;
	t_list	*new;
	int		temp;

	if (ft_lstsize(*lst1) < 1)
		return ;
	first_node = *lst1;
	temp = first_node->content;
	new = ft_lstnew(temp);
	ft_lstadd_front(lst2, new);
	if (first_node != NULL)
		ft_lstdelone(lst1, first_node);
}

void	ft_rotate(t_list **lst)
{
	t_list	*first_node;
	t_list	*last_node;

	if (ft_lstsize(*lst) < 2)
		return ;
	first_node = *lst;
	last_node = ft_lstlast(first_node);
	*lst = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
}

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

// cc operations.c Libft/ft_lstnew.c Libft/ft_putlst_fd.c 
// Libft/ft_lstadd_front.c Libft/ft_putnbr_fd.c Libft/ft_putendl_fd.c 
// Libft/ft_lstsize.c Libft/ft_lstadd_back.c Libft/ft_lstlast.c 
// Libft/ft_lstclear.c Libft/ft_lstdelone.c

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*lst1 = NULL;
// 	t_list	*lst2 = NULL;
// 	t_list	*new1 = ft_lstnew(1);
// 	t_list	*new2 = ft_lstnew(2);
// 	t_list	*new3 = ft_lstnew(3);
// 	t_list	*new4 = ft_lstnew(4);
// 	t_list	*new5 = ft_lstnew(5);

// 	ft_lstadd_front(&lst1, new1);
// 	ft_lstadd_front(&lst1, new2);
// 	ft_lstadd_back(&lst1, new3);
// 	ft_lstadd_back(&lst1, new4);
// 	ft_lstadd_back(&lst1, new5);

// 	printf("The content of lst1:\n");
// 	ft_putlst_fd(lst1, 1);
// 	write(1, "\n", 1);

// 	printf("Swapping the first two elements in lst1:\n");
// 	ft_swap(&lst1);
// 	ft_putlst_fd(lst1, 1);
// 	write(1, "\n", 1);

// 	printf("Rotating lst1:\n");
// 	ft_rotate(&lst1);
// 	ft_putlst_fd(lst1, 1);
// 	write(1, "\n", 1);

// 	printf("Reverse-Rotating lst1:\n");
// 	ft_reverse_rotate(&lst1);
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
