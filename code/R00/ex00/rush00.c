/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:18:24 by maricard          #+#    #+#             */
/*   Updated: 2022/08/21 13:28:27 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	int	x_contador;

	x_contador = 0;
	ft_putchar('o');
	while (x_contador < x - 2)
	{
		ft_putchar('-');
		x_contador++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_second_line(int x, int y)
{
	int	k;
	int	i;

	i = 0;
	k = 0;
	while (i < y - 2)
	{
		ft_putchar('|');
		k = 0;
		while (k < x - 2)
		{
			ft_putchar(' ');
			k++;
		}
		if (x > 1)
		{
			ft_putchar('|');
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_last_line(int x, int y)
{
	int	x_contador;

	x_contador = 0;
	if (y > 1)
	{	
		ft_putchar('o');
		while (x_contador < x - 2)
		{
			ft_putchar('-');
			x_contador++;
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_first_line(x);
	ft_second_line(x, y);
	ft_last_line(x, y);
}
