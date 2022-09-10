/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:03:01 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 12:45:52 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	i = 0;
	number = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i++ < power)
		number *= nb;
	return (number);
}
/* 
int main(int argc, char **argv)
{
	int n = atoi(argv[argc - 2]);
	int power = atoi(argv[argc - 1]);
	
	printf("Sending n = %d and power = %d\n", n, power);
	printf("Returning %d\n", ft_iterative_power(n, power));
} */