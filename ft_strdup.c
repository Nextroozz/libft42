/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:23:11 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/08 14:23:12 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*out;
	int		i;

	i = 0;
	out = ft_calloc(ft_strlen(s), sizeof(char));
	while (s[i])
	{
		out[i] = s[i];
		i++;
	}
	return (out);
}
