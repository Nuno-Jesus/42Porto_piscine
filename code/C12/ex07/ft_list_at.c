/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:50:55 by marvin            #+#    #+#             */
/*   Updated: 2023/02/01 23:50:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list && nbr--)
		begin_list = begin_list->next;
	return (begin_list);
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
	unsigned int	i;
	t_list			*list;

	i = 0;
	list = NULL;
	for (int i = 1; i < argc; i++)
		ft_list_push_front(&list, argv[i]);
	printf("Element of position %u : %s\n", i, (char *)ft_list_at(list, i)->data);
	ft_list_print(list);
}
*/
