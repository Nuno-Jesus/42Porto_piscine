/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:48:13 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/20 21:54:11 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(){
	int a = 1, b = 2, div = 0, mod = 0;
	
	printf("Sending a = %d and b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Returned div = %d and mod = %d\n", div, mod);
} */