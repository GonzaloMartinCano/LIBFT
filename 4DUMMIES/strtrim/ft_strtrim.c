/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:41:22 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/20 13:07:34 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_look(char c, const char *set)
{
	int x;
	int len2;

	x = 0;
	len2 = ft_strlen(set);
	while (x < len2)
	{
		if (c == set[x])
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*dst;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_look(s1[i], set))
		i++;
	while (len > 0 && ft_look(s1[len - 1], set))
		len--;
	if (len < i)
		len = i;
	dst = (char*)malloc(sizeof(char) * (len - i + 1));
	if (!dst)
		return (NULL);
	while (i < len)
		dst[j++] = (char)s1[i++];
	dst[j] = '\0';
	return (dst);
}
