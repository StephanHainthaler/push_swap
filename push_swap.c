/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:25:29 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/15 09:25:30 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*make_stack_arg2(t_list **stack, char **strarr)
{
	t_list	*new;
	int		i;

	i = 0;
	while (strarr[i] != NULL)
	{
		if (ft_isnumber(strarr[i]) == false
			|| ft_isduplicate(strarr, i) == true)
		{
			if (stack)
				ft_lstclear(stack);
			return (free_strarr(strarr), NULL);
		}
		new = ft_lstnew(ft_atoi(strarr[i]),
				get_index(strarr, ft_atoi(strarr[i])));
		if (new == NULL)
		{
			if (stack)
				ft_lstclear(stack);
			return (free_strarr(strarr), NULL);
		}
		ft_lstadd_back(stack, new);
		i++;
	}
	return (free_strarr(strarr), *stack);
}

t_list	*make_stack(t_list **stack, char **strarr, int index)
{
	t_list	*new;
	int		i;

	i = 1;
	while (i < index)
	{
		if (ft_isnumber(strarr[i]) == false
			|| ft_isduplicate(strarr, i) == true)
		{
			if (stack)
				ft_lstclear(stack);
			return (NULL);
		}
		new = ft_lstnew(ft_atoi(strarr[i]),
				get_index(strarr, ft_atoi(strarr[i])));
		if (new == NULL)
		{
			if (stack)
				ft_lstclear(stack);
			return (NULL);
		}
		ft_lstadd_back(stack, new);
		i++;
	}
	return (*stack);
}

int	main(int argc, char *argv[])
{
	t_list	*a_stack;
	char	**strarr;

	a_stack = NULL;
	if (argc <= 1)
		return (0);
	if (argc == 2)
	{
		strarr = ft_split(argv[1], ' ');
		if (strarr == NULL)
			return (write(2, "Error\n", 6), 0);
		a_stack = make_stack_arg2(&a_stack, strarr);
	}
	else
		a_stack = make_stack(&a_stack, argv, argc);
	if (a_stack == NULL)
		return (write(2, "Error\n", 6), 0);
	sort_stack(a_stack);
	ft_lstclear(&a_stack);
	return (0);
}
