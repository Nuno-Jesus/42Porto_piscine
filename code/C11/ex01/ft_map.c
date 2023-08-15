/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:07:40 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/11 13:32:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/* 
int ft_square(int n)
{
	return n * n;
} */

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*array;
	
	if (tab == NULL || f == NULL)
		return (NULL);
	i = 0;
	array = (int *)malloc(length * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
/* 
void ft_print(int *array, int size)
{
	if(array == NULL)
		printf("NULL ARRAY\n");
	else
	{
		for(int i = 0; i < size; i++)
			printf("%d ", array[i]);
		printf("\n");
	}
}

int main()
{
	int array[] = {2, 3, 20, 16, 25};
	int size = 0;
	
	int *new = ft_map(array, size, &ft_square);
	ft_print(new, size);
} */