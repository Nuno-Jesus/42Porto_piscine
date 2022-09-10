/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:59:17 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 12:09:07 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_invalid(char *base)
{
	int	i;
	int	k;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[k] == base[i])
				return (1);
			k++;
		}
		i++;
	}
	return (i <= 1);
}

void	ft_putnbr_base_recursive(long int nbr, char *base)
{
	int	base_size;

	base_size = ft_strlen(base);
	if (nbr < base_size)
		write(1, &base[nbr], 1);
	else
	{
		ft_putnbr_base_recursive(nbr / base_size, base);
		write(1, &base[nbr % base_size], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;

	n = nbr;
	if (is_invalid(base))
		return ;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	ft_putnbr_base_recursive(n, base);
}
/* 
int main(void)
{
	char base[] = "0123456789ABCDEF";
	//char hexbase[] = "0123456789ABCDEF";
	//char binbase[] = "01";
	//char decbase[] = "0123456789";
	//char octbase[] = "poneyvif";
	ft_putnbr_base(INT_MIN, base);
} */