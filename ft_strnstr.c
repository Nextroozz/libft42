/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:51:40 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/11 16:26:48 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	while (big[i] && i < len)
	{
		i2 = 0;
		while (big[i + i2] == little[i2] && i < len)
		{
			i2++;
		}
		if (little[i2] == '\0' || i == len)
			return ((char *)&big[i]);
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