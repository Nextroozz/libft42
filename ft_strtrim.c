/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:31:46 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/08 15:31:47 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char const *set)
{
	int	i;

	i = ft_strlen(set);
	while (i >= 0)
	{
		if (c == set[i])
			return (1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	int		i;
	int		j;

	i = 0;
	j = 0;
	out = ft_calloc(ft_strlen(s1), sizeof(char));
	while (s1[i])
	{
		if (!(in_set(s1[i], set)))
		{
			out[j] = s1[i];
			j++;
		}
		i++;
	}
	return (out);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n",ft_strtrim(argv[1], argv[2]));
	return argc;
}*/