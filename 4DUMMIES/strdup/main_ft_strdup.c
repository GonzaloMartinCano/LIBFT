/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:40:29 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 17:00:44 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *s1)
{
	int i;
	int j;
	char *dst;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
		return (NULL);
	while (i > 0)
	{
		dst[j] = s1[j];
		i--;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

int main()
{
	char *s1 = "HOLA";
	printf("%s\n", strdup(s1));
	printf("%s\n", ft_strdup(s1));
}

