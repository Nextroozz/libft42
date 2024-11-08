/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:18:21 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/07 11:18:22 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t nb1, int nb2)
{
	size_t	new;

	new = nb2;
	if (nb1 > new)
	{
		return (new);
	}
	return (nb1);
}

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	len;
	int		initial;

	initial = ft_strlen(dest);
	i = 0;
	len = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (ft_strlen(src) + ft_min(nb, initial));
}
/*#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%zu\n", ft_strlcat(argv[1],argv[2],5));
	return argc;
}*/
