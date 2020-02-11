/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:53:01 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/11 16:18:04 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <string.h>
#include <stdio.h>

void *ft_memset(void *b,int c, size_t len)
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

int		main()
{
	char b[] = "holoooooooo";
	int c = 97;
	size_t len = 4;
	printf("%s\n", ft_memset(b, c, len));
	printf("%s\n", memset(b, c, len));
}
