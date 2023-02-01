/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:15:45 by marvin            #+#    #+#             */
/*   Updated: 2023/02/01 23:15:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

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
/* 
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
		ft_list_push_front(&list, argv[i]);
	printf("List size %d\n", ft_list_size(list));
	ft_list_print(list);
}
*/