/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:38:06 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/15 16:59:21 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	unsigned char	character;
	size_t			i;

	i = 0;
	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	character = (unsigned char)c;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == character)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
