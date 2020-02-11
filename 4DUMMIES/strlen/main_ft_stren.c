/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:51:33 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/05 11:18:26 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t x;

	x = 0;
	while(s[x] != '\0')
	{
		x++;		 
	}
	return (x);
}
int main()
{
	char *s = "hdehudheuhduehd";
	printf("%zu\n", ft_strlen(s));
	printf("%zu\n", strlen(s));	
}

