/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:55:28 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/07 11:55:29 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == c)
			return (str + i);
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n", ft_strrchr(argv[1],argv[2][0]));
	return argc;
}*/