/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:56:42 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/11 11:50:10 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;
	char			*src2;

	i = 0;
	j = 0;
	src2 = (char*)src;
	while (dst[i])
		i++;
	result = 0;
	while (src2[result])
		result++;
	if (i <= dstsize)
		result = result + i;
	else
		result = result + dstsize;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (result);
}
