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

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	result = 0;
	minus = 1;
	i = 0;
	while ((str[i] >= 7 && str[i] <= 15) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		result *= 10;
		result += str[i] - 48;
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