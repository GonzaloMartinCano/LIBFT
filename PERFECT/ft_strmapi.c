/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:12:52 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/18 17:23:21 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	x;
	char			*aux;

	x = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	aux = (char*)malloc(sizeof(char) * (len + 1));
	if (aux == NULL)
		return (NULL);
	while (s[x])
	{
		aux[x] = f(x, s[x]);
		x++;
	}
	aux[x] = '\0';
	return (aux);
}
