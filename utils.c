/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:40:34 by shaintha          #+#    #+#             */
/*   Updated: 2023/11/21 11:40:56 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool    isduplicate_in_lst(t_list **lst, int nbr)
{
    t_list	*current_node;
    int     i;

    current_node = *lst;
    i = 0;
	while (current_node)
	{
        current_node = *lst;
        if (current_node->content == nbr)
            return (true);
        if (current_node->next == NULL)
			break ;
        *lst = current_node->next;
        i++;
    }
    return (false);
}
