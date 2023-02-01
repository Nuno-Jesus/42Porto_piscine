/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:30:48 by marvin            #+#    #+#             */
/*   Updated: 2023/02/01 23:30:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*list;

	i = 0;
	list = NULL;
	while (i < size)
		ft_list_push_front(&list, strs[i++]);
	return (list);
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

	list = ft_list_push_strs(argc - 1, argv + 1);
	ft_list_print(list);
}
*/
