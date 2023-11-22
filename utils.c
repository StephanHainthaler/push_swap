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

bool	ft_isduplicate_in_lst(t_list **lst, int nbr)
{
	t_list	*current_node;
	int		i;

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

bool	ft_isint(char *str)
{
	long int	nbr;
	int			sign;
	int			i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + str[i++] - '0';
	nbr = nbr * sign;
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (false);
	return (true);
}

bool	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
			i++;
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (false);
		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (false);
			i++;
		}
	}
	if (ft_isint(str) == false)
		return (false);
	return (true);
}

void	assign_index(t_list **lst)
{
	t_list	*current_node;
	int		i;
	int		rank;
	int		count;

	count = INT_MIN;
	rank = 1;
	i = 0;
	while (i < ft_lstsize(*lst))
	{
		current_node = *lst;
		while (count == INT_MAX || i == ft_lstsize(*lst) - 1)
		{
			current_node = *lst;
			if (current_node->content == count)
			{
				current_node->index = rank;
				rank++;
				break ;
			}
			count++;
			if (current_node->next == NULL)
				break ;
			*lst = current_node->next;
		}
		i++;
	}
}
// main for testing ft_isnumber() & ft_isint()
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	int i;

// 	if (argc >= 2)
// 	{
// 		i = 1;
// 		while (i < argc)
// 		{
// 			if (ft_isnumber(argv[i]) == false)
// 			{
// 				printf("String %i:\t\033[0;31mNO\033[0m\t%s\n", i, argv[i]);
// 				i++;
// 			}
// 			else
// 			{
// 				printf("String %i:\t\033[0;32mYES\033[0m\t%s\n", i, argv[i]);
// 				i++;
// 			}
// 		}
// 	}
// 	return (0);
// }
