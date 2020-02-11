/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:07:11 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/15 17:00:10 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		x;

	x = 0;
	str = (char*)s;
	while (str[x])
	{
		if (str[x] == c)
			return (&str[x]);
		x++;
	}
	if (str[x] == '\0' && c == '\0')
		return (&str[x]);
	return (NULL);
}
