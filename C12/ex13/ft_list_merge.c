/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:44:06 by marvin            #+#    #+#             */
/*   Updated: 2023/02/02 20:44:06 by marvin           ###   ########.fr       */
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

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!begin_list1)
		return ;
	if (!(*begin_list1))
		*begin_list1 = begin_list2;
	else
		ft_list_last(*begin_list1)->next = begin_list2;
}
/* 
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*aux;

	while (begin_list)
	{
		aux = begin_list;
		begin_list = begin_list->next;
		if (*free_fct)
			(*free_fct)(aux->data);
		free(aux);
	}
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (!begin_list)
		return ;
	node = ft_create_elem(data);
	if (!node)
		return ;
	if (*begin_list)
		node->next = *begin_list;
	*begin_list = node;
}

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
	while (list)
	{
		printf("\"%s\"-> ", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int main(int argc, char **argv)
{
	t_list	*l1;
	t_list	*l2;

	l1 = NULL;
	l2 = NULL;
	for (int i = 1; i < argc; i++)
	{
		ft_list_push_front(&l1, argv[i]);
		ft_list_push_front(&l2, argv[i]);
	}
	ft_list_print(l1);	
	ft_list_print(l2);
	ft_list_merge(&l1, l2);
	ft_list_print(l1);
	ft_list_clear(l1, NULL);
}
 */