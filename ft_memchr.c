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

void	*ft_memchr(const void *memoryBlock, int c, size_t size)
{
	size_t			i;
	unsigned char	*out;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)memoryBlock)[i] == c)
		{
			out = &((unsigned char *)memoryBlock)[i];
			return ((void *)out);
		}
		i++;
	}
	return (NULL);
}
