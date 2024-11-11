/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:29:33 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/06 13:29:35 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *nptr)
{
	int	i;
	int	minus;
	int	result;

	result = 0;
	minus = 1;
	i = 0;
	while ((nptr[i] >= 7 && nptr[i] <= 15) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{	
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (minus * result);
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{

	printf("%d\n", ft_atoi("++++231"));
	printf("%d\n", atoi("++++++231"));
	return 0;
}*/