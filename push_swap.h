/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:25:13 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/15 09:25:15 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

t_list	*make_stack(t_list **stack, char **strarr, int index);
t_list	*make_stack_arg2(t_list **stack, char **strarr);
bool	ft_isduplicate(char **strarr, int i);
bool	ft_isnumber(char *str);
bool	ft_isint(char *str);
int		get_index(char **strarr, int nbr);
void	free_strarr(char **strarr);
void	sort_stack(t_list *a_stack);
bool	is_sorted(t_list *lst);
void	two_sort(t_list **a_stack);
void	three_sort(t_list **a_stack);
void	four_sort(t_list **a_stack, t_list **b_stack);
void	five_sort(t_list **a_stack, t_list **b_stack);
void	radix_sort(t_list **a_stack, t_list **b_stack);
int		get_smallest_index(t_list *lst);
int		get_smallest_index_pos(t_list *lst, int smallest_index);
int		get_biggest_index(t_list *lst);
void	ft_swap(t_list **lst);
void	sa(t_list **a_stack);
void	sb(t_list **b_stack);
void	ss(t_list **a_stack, t_list **b_stack);
void	ft_push(t_list **lst1, t_list **lst2);
void	pa(t_list **a_stack, t_list **b_stack);
void	pb(t_list **a_stack, t_list **b_stack);
void	ft_rotate(t_list **lst);
void	ra(t_list **a_stack);
void	rb(t_list **b_stack);
void	rr(t_list **a_stack, t_list **b_stack);
void	ft_reverse_rotate(t_list **lst);
void	rra(t_list **a_stack);
void	rrb(t_list **b_stack);
void	rrr(t_list **a_stack, t_list **b_stack);

#endif