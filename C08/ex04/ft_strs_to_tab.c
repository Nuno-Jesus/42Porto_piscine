/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 09:48:43 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/05 09:48:43 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(ft_strlen(str) + 1);
	if (dup == NULL)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		array[i].size = ft_strlen(av[i]);
		array[i].str = ft_strdup(av[i]);
		array[i].copy = ft_strdup(av[i]);
		if (array[i].str == NULL || array[i].copy == NULL)
			return (NULL);
		i++;
	}
	array[i].str = NULL;
	return (array);
}
/* 
void print_array(t_stock_str *array)
{
	int i;

	if (array == NULL)
		printf("Array is null\n");
	else
	{
		for (i = 0; array[i].str != NULL; i++)
			printf("%d - %d %s %s\n", i, array[i].size, array[i].str, array[i].copy);
		printf("%d - NULL\n", i);
	}
}

int main(int argc, char **argv)
{
	print_array(ft_strs_to_tab(argc, argv));
}  */