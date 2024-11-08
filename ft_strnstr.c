/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:51:40 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/08 11:51:41 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	while (s1[i] && i2 < size)
	{
		i2 = 0;
		while (s1[i + i2] == s2[i2] && i2 < size)
		{
			i2++;
		}
		if (s2[i2] == '\0' || i2 == size)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
/*#include <string.h>
 #include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("%s\n", ft_strnstr(argv[1],argv[2],6));
	return argc;
}*/