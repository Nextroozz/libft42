/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:44:31 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/11 16:14:26 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n", ft_strchr(argv[1],argv[2][0]));
	return argc;
}*/
