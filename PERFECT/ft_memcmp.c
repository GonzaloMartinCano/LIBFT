/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:15:33 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/15 16:59:38 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				x;
	const unsigned char	*str1;
	const unsigned char	*str2;

	x = 0;
	str1 = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;
	while ((x < n - 1) && str1[x] == str2[x])
		x++;
	if (!(n <= 0))
		return (str1[x] - str2[x]);
	else
		return (0);
}
