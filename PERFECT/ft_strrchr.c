/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:04:40 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/15 17:01:08 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		x;

	x = 0;
	str = (char*)s;
	while (s[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (str[x] == c)
			return (&str[x]);
		x--;
	}
	return (NULL);
}
