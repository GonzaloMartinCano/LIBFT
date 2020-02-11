/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:30:48 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/18 12:56:23 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;
	size_t	slen;

	i = 0;
	if (!s)
		return (0);
	dst = malloc(sizeof(char) * len + 1);
	if (dst == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start)
	{
		dst[i] = '\0';
		return (dst);
	}
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

int main ()
{
    char const *s = "hola";
    unsigned int start = 2;
    size_t len = 5;
    //printf("%d\n", substr(s, start, len));
    printf("%s\n", ft_substr(s, start, len));
}
