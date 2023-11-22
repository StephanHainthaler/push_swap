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

bool	ft_isduplicate(char **strarr)
{
	int	nbr;
	int	i;
	int j;

	i = 0;
	while (strarr[i] != NULL)
	{
		nbr = ft_atoi(strarr[i]);
		j = 1 + i;
		while (strarr[j] != NULL)
		{
			if (ft_atoi(strarr[j]) == nbr)
				return (true);
			j++;	
		}
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

int	get_index(char **strarr, int nbr)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (strarr[i] != NULL)
	{
		if (ft_atoi(strarr[i]) <= nbr)
			count++;
		i++;
	}
	return (count);
}

t_list	*ft_lstnew_with_index(int content, int index)
{
	t_list	*new_lst;

	new_lst = (t_list *)malloc(1 * sizeof(t_list));
	if (!new_lst)
		return (NULL);
	new_lst->content = content;
	new_lst->index = index;
	new_lst->next = NULL;
	return (new_lst);
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
