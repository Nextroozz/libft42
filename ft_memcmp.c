/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:32:57 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/08 11:32:58 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)p1)[i] == ((unsigned char *)p2)[i]
		&& i < size)
	{
		i++;
	}
	return (((unsigned char *)p1)[i] - ((unsigned char *)p2)[i]);
}
