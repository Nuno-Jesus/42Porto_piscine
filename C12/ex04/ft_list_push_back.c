/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:24:17 by marvin            #+#    #+#             */
/*   Updated: 2023/02/01 23:24:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;

	if (!begin_list)
		return ;
	node = ft_create_elem(data);
	if (!node)
		return;
	if (!(*begin_list))
		*begin_list = node;
	else
		ft_list_last(*begin_list)->next = node;	
}
/* 

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

void	ft_list_print(t_list *list)
{
	t_list	*aux;

	while (list)
	{
		aux = list;
		printf("%s->", aux->data);
		list = list->next;
		free(aux);
	}
	printf("NULL\n");
}

int main(int argc, char **argv)
{
	t_list	*list;

	list = NULL;
	for (int i = 1; i < argc; i++)
		ft_list_push_back(&list, argv[i]);
	ft_list_print(list);
}
 */