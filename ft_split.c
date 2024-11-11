/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:51:32 by mseverin          #+#    #+#             */
/*   Updated: 2024/11/11 15:38:20 by mseverin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static	*ft_strdup_modif(const char *s, char c)
{
	char	*out;
	int		i;

	i = 0;
	out = ft_calloc(ft_strlen(s), sizeof(char));
	while (s[i] && s[i] != c)
	{
		out[i] = s[i];
		i++;
	}
	return (out);
}

int static	count_words(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			res++;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tab = ft_calloc(count_words(s, c), sizeof(char *));
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_strdup_modif(s + i, c);
			i += ft_strlen(tab[j]);
			j++;
		}
		else
			i++;
	}
	return (tab);
}

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
	int	i;

	i = 0;
	ft_split(argv[1], argv[2][0]);
	return argc;
}*/