/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:45:25 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/07 10:45:27 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	len_src;
	size_t	len_asked;

	i = 0;
	len_asked = siz;
	len_src = ft_strlen(src);
	while (i < len_asked)
	{
		if (i >= len_src)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%zu\n",ft_strlcpy(argv[1],argv[2],10));
	return argc;
}*/