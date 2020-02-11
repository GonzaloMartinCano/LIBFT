/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <gmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:59:31 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/18 14:11:13 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_atoi(const char *str)
{
	int				x;
	long int		sign;
	long int		result;

	x = 0;
	sign = 1;
	result = 0;
	while (str[x] == '\t' || str[x] == '\n' || str[x] == '\v' ||
			str[x] == '\f' || str[x] == '\r' || str[x] == ' ')
		x++;
	if (str[x] == '-' && str[x + 1] >= '0' && str[x + 1] <= '9')
		sign = -1;
	if (str[x] == '+' || str[x] == '-')
		x++;
	while (str[x] && str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + (int)(str[x] - '0');
		if (result * sign > 2147483647)
			return (-1);
		if (result * sign < -2147483648)
			return (0);
		x++;
	}
	return (result * sign);
}
int main()
{
	char str[] = "-1234ab567";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
