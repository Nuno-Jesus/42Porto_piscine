/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:50:41 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/20 22:06:40 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	min;
	int	pos_min;
	int	i;
	int	k;

	i = 0;
	k = 1;
	pos_min = 0;
	while (i < size - 1)
	{
		min = tab[i];
		k = i + 1;
		while (k < size)
		{
			if (tab[k] < min)
			{
				min = tab[k];
				pos_min = k;
			}
			k++;
		}
		if (min != tab[i])
			swap(&tab[pos_min], &tab[i]);
		i++;
	}
}

/* void print_array(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main(){
	int array[] = {1, -1, 0};
	int size = 3;

	ft_sort_int_tab(array, size);
	print_array(array, size);
} */