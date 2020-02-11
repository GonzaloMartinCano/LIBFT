/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:38:06 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 12:48:42 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst2;
    unsigned char *src2;
	unsigned char character;
    size_t i;

    i = 0;
    dst2 = (unsigned char*)dst;
    src2 = (unsigned char*)src;
	character = (unsigned char)c;
    while (i < n)
    {
		dst2[i] = src2[i];
        if (src2[i] == character)
        {
            return (dst + i + 1);
        }
        i++;
    }
    return (NULL);
}

int main()
{
	char src[] = "Holaprde";
	char dst[] = "Liladed";
	int c = 97;
	size_t n = 6;
	printf("%s\n", memccpy(dst, src, c, n));
	printf("%s\n", ft_memccpy(dst, src, c, n));
}
