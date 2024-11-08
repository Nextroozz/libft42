/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:46:25 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/08 13:46:26 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementsize)
{
	void	*out;
	size_t	i;

	i = 0;
	out = malloc(elementCount * elementsize);
	if (!out)
		return (NULL);
	while (i < elementsize)
	{
		((unsigned char *)out)[i] = 0;
		i++;
	}
	return (out);
}
