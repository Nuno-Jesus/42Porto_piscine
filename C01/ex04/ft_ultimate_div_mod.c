/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:51:54 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/20 21:53:35 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a;
	aux_b = *b;
	*a = aux_a / aux_b;
	*b = aux_a % aux_b;
}
/* 
int main(){
	int a = 7, b = 3;
	int *ptr1 = &a, *ptr2 = &b;
	
	printf("Sending a = %d and b = %d\n", a, b);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("Returned a = %d and b = %d\n", a, b);
} */