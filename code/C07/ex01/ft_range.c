/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:49:36 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/05 10:16:02 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_range(int min, int max)
{
	if (max < 0 && min > 0)
		return (min - max);
	else
		return (max - min);
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

	if (min >= max)
		return (NULL);
	n = get_range(min, max);
	array = (int *)malloc(n * sizeof(int));
	if (array == NULL)
		return (NULL);
	fill_array(array, n, min);
	return (array);
}
/* 
void print_array(int *array, int n)
{
	int i;

	i = 0;
	while (i < n)
		printf("%d ", array[i++]);
	printf("\n");
}

int main(int argc, char **argv)
{
	if(argc != 3)
		return (0);

	int min = atoi(argv[argc - 2]);
	int max = atoi(argv[argc - 1]);
	int *array = ft_range(min, max);

	if(!array)
		printf("Min >= Max (%d >= %d)\n", min, max);
	else 
		print_array(array, max - min);
} */