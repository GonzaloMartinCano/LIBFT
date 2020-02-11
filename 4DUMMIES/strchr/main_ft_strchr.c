/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:07:11 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/05 20:29:00 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		x;

	x = 0;
	str = (char*)s;
	while (str[x])
	{
		if (str[x] == c)
			return (&str[x]);
		x++;
	}
	if (str[x] == '\0' && c == '\0')
		return (&str[x]);
	return (NULL);
}
int main ()
{
	int c = 97;
	const char *s = "Hola Mundo";
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
}
