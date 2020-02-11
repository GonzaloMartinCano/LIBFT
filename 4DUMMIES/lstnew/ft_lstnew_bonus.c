/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:07:11 by gmartin-          #+#    #+#             */
/*   Updated: 2019/11/19 13:07:44 by gmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void const *content)
{
	t_list *new;

	new = malloc(sizeof(t_list);
	if(new == NULL)
		return (NULL);
	new->content = (void*)content;
	new->next = NULL;
	return (new);
}
