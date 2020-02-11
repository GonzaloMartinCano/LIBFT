/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:07:19 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/15 17:00:54 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				x;
	unsigned char		*str1;
	unsigned char		*str2;

	x = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1[x] && str2[x] && (x < n - 1) && str1[x] == str2[x])
		x++;
	if (!(n <= 0))
		return (str1[x] - str2[x]);
	else
		return (0);
}
