/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:03:37 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/15 16:59:51 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dst2;

	src2 = (char*)src;
	dst2 = dst;
	if ((dst == '\0' && src == '\0') || len <= 0)
		return (dst);
	if (src2 < dst2)
	{
		src2 = src2 + (len - 1);
		dst2 = dst2 + (len - 1);
		while (len-- > 0)
			*dst2-- = *src2--;
		return (dst);
	}
	while (len-- > 0)
		*dst2++ = *src2++;
	return (dst);
}
