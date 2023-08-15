/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:22:22 by marvin            #+#    #+#             */
/*   Updated: 2023/02/02 20:22:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_list_remove_if_aux(t_list *node, void *ref, \
	int (*cmp)(), void (*f)(void *))
	{
		t_list	*ret;

		if (!node)
			return (NULL);
		if (!(*cmp)(node->data, ref))
		{
			ret = ft_list_remove_if_aux(node->next, ref, cmp, f);
			if (*f)
				(*f)(node->data);
			free(node);
		}
		else
		{
			ret = node;
			ret->next = ft_list_remove_if_aux(node->next, ref, cmp, f);
		}
		return (ret);
	}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, \
	int (*cmp)(), void (*free_fct)(void *))
	{
		if (!begin_list || !cmp)
			return ;
		*begin_list = ft_list_remove_if_aux(*begin_list, data_ref, cmp, free_fct);
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
	t_list	*list;

	list = NULL;
	for (int i = 1; i < argc; i++)
		ft_list_push_front(&list, argv[i]);
	ft_list_print(list);	
	ft_list_remove_if(&list, "Nuno", &strcmp, NULL);
	ft_list_print(list);
	ft_list_clear(list, NULL);
}
*/
