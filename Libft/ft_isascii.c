/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:37:28 by shaintha          #+#    #+#             */
/*   Updated: 2023/09/11 16:20:33 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        char    *str;
        int ascii = 0;
        int i;

        str = argv[1];
        i = 0;
        while (str[i])
        {
            if (ft_isascii(str[i]) != 0)
                ascii++;
            i++;
        }
        printf("ASCII Characters: %d\n", ascii);
    }
    return (0);
}
*/
