/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:30:45 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/12 11:33:28 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
			return (1);
	else
		return (0);
}
int main ()
{
	int c = '8';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
}
