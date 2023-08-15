/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:32:10 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/20 21:56:44 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/* 
int main(){
	int a = 7, b = 3;
	
	printf("Sending a = %d and b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Returned a = %d and b = %d\n", a, b);
} */