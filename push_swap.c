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

#include <stdio.h>

static char	**free_strarr(char **strarr, int index)
{
	while (index >= 0)
	{
		free(strarr[index]);
		index--;
	}
	free(strarr);
	return (NULL);
}

t_list  *make_stack2(t_list **stack, char *str)
{
    char    **strarr;
    t_list      *new;
    int             i;

    strarr = ft_split(str, ' ');
    if (strarr == NULL)
        return (NULL);
    i = 0;
    while (strarr[i] != NULL)
    {
        new = ft_lstnew(ft_atoi(strarr[i]));
        if (new == NULL)
        {   
            if (stack)
                ft_lstclear(stack);
            return (free_strarr(strarr, i), NULL);
        }
        ft_lstadd_back(stack, new);
        i++;
    }
    free_strarr(strarr, i);
    return (*stack);
}

t_list  *make_stack(t_list **stack, char **strarr, int index)
{
    t_list  *new;
    int     i;

    i = 1;
    while (i < index)
    {
        new = ft_lstnew(ft_atoi(strarr[i]));
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

int main(int argc, char *argv[])
{
    t_list  *a_stack;
    t_list  *b_stack;

    a_stack = NULL;
    if (argc <= 1)
        return (-1);
    if (argc >= 2)
    {
        if (argc == 2)
            a_stack = make_stack2(&a_stack, argv[1]);
        if (argc > 2)
            a_stack = make_stack(&a_stack, argv, argc);
        else if (a_stack == NULL)
            return (-1);
    }
    b_stack = NULL;
    ft_putlst_fd(a_stack, 1);
    ft_lstclear(&a_stack);
    return (0);
}
