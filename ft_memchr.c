/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:29:00 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/08 11:29:01 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*out;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
		{
			out = &((unsigned char *)s)[i];
			return ((void *)out);
		}
		i++;
	}
	return (NULL);
}
