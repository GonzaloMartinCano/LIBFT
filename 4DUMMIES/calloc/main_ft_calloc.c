/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:36:50 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 16:16:16 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main()
{
    size_t count = 3;
    size_t size = 5;
    printf("%s\n", calloc(count, size));
    printf("%s\n", ft_calloc(count, size));
}