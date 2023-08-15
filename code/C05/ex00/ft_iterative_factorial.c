/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:48:44 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 12:33:02 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
		number = number * nb--;
	return (number);
}

/* int main(int argc, char **argv)
{
	int n = atoi(argv[argc - 1]);
	printf("Sending n = %d\n", n);
	printf("Returning %d\n", ft_iterative_factorial(n));
} */