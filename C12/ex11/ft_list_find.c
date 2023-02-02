/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:44:55 by marvin            #+#    #+#             */
/*   Updated: 2023/02/02 00:44:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!cmp)
		return (NULL);
	while (begin_list)
	{
		if (!(*cmp)(begin_list->data, data_ref))
			break ;
		begin_list = begin_list->next;
	}
	return (begin_list);
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
		printf("%s->", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

void	func(void *data)
{
	((char *)data)[0] += 1;
}

int main(int argc, char **argv)
{
	t_list	*list;
	t_list 	*aux;	
	char 	*needle = "Nuno";

	list = NULL;
	for (int i = 1; i < argc; i++)
		ft_list_push_front(&list, argv[i]);
	ft_list_print(list);
	
	aux = ft_list_find(list, needle, &strcmp);
	if (aux)
		printf("%s was found\n", needle);
	else
		printf("Couldn't find the needle\n");

	ft_list_clear(list, NULL);
}
 */