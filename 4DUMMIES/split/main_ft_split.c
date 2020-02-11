/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:57:37 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/15 13:17:12 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"	
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;

	i = 0;
	if (!s)
		return (0);
	dst = malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	while (len > 0 && s[start] != '\0')
	{
		dst[i] = s[start];
		i++;
		start++;
		len--;
	}
	dst[i] = '\0';
	return (dst);
}
static char	**ft_mallocsize(char const *s, char c)
{
	char *aux;
	char **aux2;
	int fil;

	fil = 0;
	aux = (char*)s;
	while (*aux)
	{
		while (*aux == c)
			aux++;
		if (*aux != '\0')
			fil++;
		while (*aux != c && *aux)
			aux++;
	}
	aux2 = (char**)malloc((fil + 1) * sizeof(char*));
	if (aux2 == NULL)
		return (NULL);
	return (aux2);
}
static char	**ft_copy(const char *s, char c)
{
	char *aux;
	size_t len;
	char **tab;
	int i;

	i = 0;
	len = 0;
	aux = (char*)s;
	tab = ft_mallocsize(s, c);
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			aux = (char*)s;
			while (*s != c && *s)
			{
				s++;
				len++;
			}
			tab[i++] = ft_substr(aux, 0, len);
		}
		len = 0;
	}
	tab[i] = NULL;
	return (tab);
}
char		**ft_split(char const *s, char c)
{
	char **tab;

	if (!s)
		return (NULL);
	tab = ft_mallocsize(s, c);
	if (tab == NULL)
		return (NULL);
	tab = ft_copy(s, c);
	return (tab);
}

int main()
{
	const char *s = "      split       this for   me  !       ";
	char c = ' ';
	printf("%s\n", *ft_split( s, c));
}