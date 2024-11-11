/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:39:28 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/11 15:37:37 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_intlen(int n)
{
	int	i;

	i = 0;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

char static	*ft_revstr(char *str)
{
	char	*out;
	int		i;
	int		j;

	i = ft_strlen(str) - 1;
	j = 0;
	out = ft_calloc(ft_strlen(str), sizeof(char));
	if (out)
	{
		while (i >= 0)
		{
			out[j] = str[i];
			j++;
			i--;
		}
	}
	return (out);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			i;
	long		number;

	i = 0;
	number = n;
	if (number < 0)
		number = -number;
	res = ft_calloc(ft_intlen(number) + 1, sizeof(char));
	if (res)
	{
		while (number / 10 != 0)
		{
			res[i++] = (number % 10) + 48;
			number = number / 10;
		}
		res[i] = (number % 10) + 48;
		if (n < 0)
		{
			res[i + 1] = '-';
			i++;
		}
		res = ft_revstr(res);
	}
	return (res);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n",ft_itoa(ft_atoi(argv[1])));
	return argc;
}*/