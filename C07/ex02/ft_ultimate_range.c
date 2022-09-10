/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:32:43 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/05 10:36:01 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	fill_array(int *array, int range, int min)
{
	int	i;

	i = 0;
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;

	n = ft_abs(max - min);
	array = (int *)malloc(n * sizeof(int));
	if (array == NULL)
		return (NULL);
	fill_array(array, n, min);
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
/* 
void print_array(int *array, int n)
{
	int i;

	if(n == 0)
		printf("The array has no values.\n");
	else
	{
		i = 0;
		while (i < n)
			printf("%d ", array[i++]);
		printf("\n");
	}
}

int main(int argc, char **argv)
{
	int size;
	int *ptr;
	int **array;
	int max = atoi(argv[argc - 1]);
	int min = atoi(argv[argc - 2]);
	
	array = &ptr;
	size = ft_ultimate_range(array, min, max);

	printf("Size of the array: %d\n", size);

	if(size == 0)
		printf("Min >= Max (%d >= %d)\n", min, max);
	else if(size == -1)
		printf("Not enough memory\n");
	else 
		print_array(*array, max - min);	
} */