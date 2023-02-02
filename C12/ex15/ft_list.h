/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:57:54 by marvin            #+#    #+#             */
/*   Updated: 2023/02/01 22:57:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list	*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data);

t_list	*ft_list_last(t_list *begin_list);

int		ft_list_size(t_list *begin_list);

void	ft_list_push_back(t_list **begin_list, void *data);

t_list	*ft_list_push_strs(int size, char **strs);

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

void	ft_list_reverse(t_list **begin_list);

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
	void *data_ref, int (*cmp)());

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

void	ft_list_remove_if(t_list **begin_list, void *data_ref, \
	int (*cmp)(), void (*free_fct)(void *));

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

void	ft_list_sort(t_list **begin_list, int (*cmp)());

#endif