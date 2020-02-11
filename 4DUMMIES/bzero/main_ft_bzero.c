/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 10:56:58 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 19:04:48 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	size_t x;

	x = 0;
	while (x < n)
	{
		((unsigned char*)s)[x] = 0;
		x++;
	}
}

int main ()
{
	char s[] ="paco";
	//unsigned char c[] = "Hola";
	//s = c;
	size_t n = 2;
	//printf("%s", bzero(s, n));
	printf("%s", ft_bzero(s, n));
}
