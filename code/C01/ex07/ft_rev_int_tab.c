/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:29:43 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/20 16:44:01 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = aux;
		i++;
	}
}
/* 
void print_array(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	int size = 5;
	
	ft_rev_int_tab(array, size);
	print_array(array, size);

	return 0;
} */
