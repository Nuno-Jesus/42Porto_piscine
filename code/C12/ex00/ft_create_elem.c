/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:59:24 by marvin            #+#    #+#             */
/*   Updated: 2023/02/01 22:59:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
/* 
int main()
{
	int		a;
	t_list	*list;

	a = 42;
	list = ft_create_elem(&a);
	if (!list)
		return (EXIT_FAILURE);

	printf("Value of elem->data: %d\n", *(int *)list->data);
	free(list);
}
 */