/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:10:18 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 12:48:14 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* 
int main(int argc, char **argv)
{
	int n = atoi(argv[argc - 2]);
	int power = atoi(argv[argc - 1]);
	
	printf("Sending n = %d and power = %d\n", n, power);
	printf("Returning %d\n", ft_recursive_power(n, power));
} */