/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:37:18 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/05 14:22:47 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
	if ((c >= 'a'  && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
int main ()
{
	int c = 200;
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
}
