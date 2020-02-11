/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:55:29 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/18 12:54:40 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
