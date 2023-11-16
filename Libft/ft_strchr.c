/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaintha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:10:26 by shaintha          #+#    #+#             */
/*   Updated: 2023/09/11 17:22:11 by shaintha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char	*str;
		char	c;
		char	*res1;
		char	*res2;

		str = argv[1];
		c = argv[2][0];
		printf("String: %s\n", str);
		
		res1 = strchr(str, c);
		printf("strchr: %s\n", res1);

		res2 = ft_strchr(str, c);
		printf("ft_strchr: %s\n", res2);
		return (0);
	}
}
*/