/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:37:01 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 12:07:21 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char d;
    unsigned char *s2;
    size_t i;

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
int main ()
{
    char s[] = "Hola Paco";
	int c = 99;
    size_t n = 9;
	printf("%s\n", ft_memchr(s, c, n));
	printf("%s\n", memchr(s, c, n));
}

