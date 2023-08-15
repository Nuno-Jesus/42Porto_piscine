/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:11:43 by marvin            #+#    #+#             */
/*   Updated: 2023/02/02 21:11:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list && nbr--)
		begin_list = begin_list->next;
	return (begin_list);
}

void	swap(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	unsigned int	i;
	unsigned int	n;

	i = -1;
	n = ft_list_size(begin_list);
	while (++i < (n / 2))
		swap(&(at(begin_list, i)->data), &(at(begin_list, n - i - 1)->data));
}
/* 
void	ft_list_print(t_list *list)
{
	while (list)
	{
		printf("\"%s\"-> ", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

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

int main(int argc, char **argv)
{
	t_list	*l1;

	l1 = NULL;
	for (int i = 1; i < argc; i++)
		ft_list_push_front(&l1, argv[i]);
	ft_list_print(l1);	
	ft_list_reverse_fun(l1);
	ft_list_print(l1);
	ft_list_clear(l1, NULL);
}
 */