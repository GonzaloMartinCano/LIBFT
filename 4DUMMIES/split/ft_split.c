/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:57:37 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/14 17:26:14 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"	
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int		ft_strings(char const *s, char c)
{
	int strings;

	strings = 0;
	while (*s)
	{
		if (*s == c)
			strings++;
		s++;
	}
	return (strings);
}

static char		*ft_malloc_string(char const *s, char c)
{
	int x;
	char *chain;

	x = 0;
	while (s[x] && s[x] != c)
		x++;
	chain = malloc(sizeof(char) * (x + 1));
	x = 0;
	while (s[x] && s[x] != c)
	{
		chain[x] = s[x];
		x++;
	}
	chain[x] = '\0';
	return (chain);
}

char			**ft_split(char const *s, char c)
{
	char **tab;
	int	strings;
	int i;

	strings = ft_strings(s, c);
	tab = (char**)malloc(sizeof(char*) * (strings + 1));
	i = 0;

	while(*s)
	{
		while (*s == c || *s != '\0')
			s++;
		if (*s != c || *s != '\0')
		{
			tab[i] = ft_malloc_string(s, c);
			i++;
			while (*s != c || *s != '\0')
				s++;
		}
	}
	tab[i] = '\0';
	return (tab);
}
