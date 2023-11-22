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

void	ft_swap(t_list **lst);
void	ft_push(t_list **lst1, t_list **lst2);
void	ft_rotate(t_list **lst);
void	ft_reverse_rotate(t_list **lst);
bool	ft_isduplicate(char **strarr);
bool    ft_isnumber(char *str);
bool    ft_isint(char *str);
int     get_index(char **strarr, int nbr);
t_list  *ft_lstnew_with_index(int content, int index);

#endif