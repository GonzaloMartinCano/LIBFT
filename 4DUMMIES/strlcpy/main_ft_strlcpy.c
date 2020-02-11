/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:01:06 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/18 13:58:57 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!src || !dst)
		return (0);
	while (src[count])
		count++;
	if (destsize < 1)
		return (count);
	while (src[i] && i < destsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (destsize)
		dst[i] = '\0';
	return (count);
}

int main ()
{
	size_t destsize = 0;
	char dst[] = "GI";
	const char src[] = "de";
	printf("%zu\n", ft_strlcpy(dst, src, destsize));
	printf("%lu\n", strlcpy(dst, src, destsize));
}
