/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:02:41 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 12:57:35 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}	
	return (1);
}
/* 
int main(int argc, char **argv){
	int n = atoi(argv[argc - 1]);
	if(ft_is_prime(n))
		printf("%d is a prime number\n", n);
	else
		printf("%d is NOT a prime number\n", n);
} */