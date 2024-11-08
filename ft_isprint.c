/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:25:38 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/06 14:25:39 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (0);
	return (1);
}
/*#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n",ft_isprint('n') );
	printf("%d\n",isprint('n') );
	return 0;
}*/