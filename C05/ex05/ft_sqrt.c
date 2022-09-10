/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:43:54 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 17:57:38 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (res < nb && i <= 46430)
	{
		res = i * i;
		i++;
	}
	if (res > nb || nb < 0 || nb == 0 || i == 46431)
		return (0);
	return (i - 1);
}
/* 
int main(int argc, char **argv){
	int n = atoi(argv[argc - 1]);
	int res = ft_sqrt(n);

	printf("Sending n = %d\n", n);
	if(res)
		printf("The square root of %d is %d\n", n, res);
	else
		printf("The square root of %d is irrational, 
		inexistent or 0 (in case of zero)\n", n);
} */