/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:57:58 by marvin            #+#    #+#             */
/*   Updated: 2023/02/02 20:57:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*aux;
	void	*temp;

	if (!begin_list || !cmp)
		return ;
	if (!(*begin_list))
		return ;
	aux = *begin_list;
	while (aux->next)
	{
		if ((*cmp)(aux->data, aux->next->data) > 0)
		{
			temp = aux->data;
			aux->data = aux->next->data;
			aux->next->data = temp;
			aux = *begin_list;
		}
		else
			aux = aux->next;
	}
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

	l1 = NULL;
	for (int i = 1; i < argc; i++)
		ft_list_push_front(&l1, argv[i]);
	ft_list_print(l1);	
	ft_list_sort(&l1, &strcmp);
	ft_list_print(l1);	
	ft_list_clear(l1, NULL);
}
 */