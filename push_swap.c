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

t_list  *make_stack(t_list *stack, char *str, int index)
{
    char    **strarr;
    t_list      *new;
    int             i;

    if (index <= 1)
        return (NULL);
    if (index == 2)
    {
        strarr = ft_split(str, ' ');
        stack = NULL;
        i = 0;
        while (strarr[i][0] != '\0')
        {
            new = ft_lstnew(strarr[i]);
            if (new == NULL)
                return (free_strarr(strarr, i), NULL);
            ft_lstadd_back(&stack, new);
            new = new->next;
            i++;
        }
    }
    return (stack);
}

int main(int argc, char *argv[])
{
    t_list  *a_stack;
    t_list  *b_stack;

    a_stack = make_stack(a_stack, argv[1], argc);
    b_stack = NULL;
    return (0);
}
