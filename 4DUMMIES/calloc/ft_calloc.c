/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:36:50 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 16:15:47 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	result = malloc(count * size);
	if (result == NULL)
		return (NULL);
	while (i <= (count * size))
	{
		((char*)result)[i] = 0;
		i++;
	}
	return (result);
}

