/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:37:01 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 12:14:20 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		d;
	unsigned char		*s2;
	size_t				i;

	i = 0;
	d = (unsigned char)c;
	s2 = (unsigned char*)s;
	while (i < n)
	{
		if (*s2 == d)
		{
			return (s2);
		}
		s2++;
		i++;
	}
	return (NULL);
}
