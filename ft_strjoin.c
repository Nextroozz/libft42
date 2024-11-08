/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:37 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/08 15:20:37 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		i;
	int		j;

	j = 0;
	out = ft_calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char));
	i = 0;
	while (s1[j])
	{
		out[j] = s1[j];
		j++;
	}
	i = j;
	j = 0;
	while (s2[j])
	{
		out[i] = s2[j];
		j++;
		i++;
	}
	return (out);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n", ft_strjoin(argv[1],argv[2]));
	return argc;
}*/