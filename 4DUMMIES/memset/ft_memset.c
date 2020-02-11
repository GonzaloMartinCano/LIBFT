/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:53:01 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/11 14:28:06 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t x;

	x = 0;
	while (x < len)
	{
		((unsigned char*)b)[x] = (unsigned char)c;
		x++;
	}
	return (b);
}
