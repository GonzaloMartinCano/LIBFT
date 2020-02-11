/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:55:29 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/18 12:55:24 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <xlocale.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*aux1;
	char	*aux2;

	if (!*needle)
		return ((char *)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle)
		{
			i = len;
			aux1 = (char *)haystack + 1;
			aux2 = (char *)needle + 1;
			while (i-- && *aux1 && *aux2 && *aux1 == *aux2)
			{
				++aux1;
				++aux2;
			}
			if (!*aux2)
				return ((char *)haystack);
		}
		++haystack;
	}
	return (NULL);
}


int main()
{
	char haystack[] = "Hola Mundo";
	char needle[] = "Mu";
	size_t len = -13;
	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("%s\n", strnstr(haystack, needle, len));
}	
