/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:15:33 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 13:54:11 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t x;
    const unsigned char *str1;
    const unsigned char *str2; 

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
int main ()
{
	size_t n = 6;
	const char *s1 = "Hola Mundo";
	const char *s2 = "Hola Perro";
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
}