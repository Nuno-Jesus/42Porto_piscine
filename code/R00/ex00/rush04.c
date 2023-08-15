/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:24:40 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/20 19:57:34 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_spaces(int x)
{
	int	col;

	col = 0;
	while (col < x - 2)
	{
		ft_putchar(' ');
		col++;
	}
}

void	print_upper_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	if (x > 0)
		ft_putchar('\n');
}

void	print_lower_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('C');
		}
		else if (i == x - 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
	if (x > 0)
		ft_putchar('\n');
}

void	print_middle_lines(int x, int y)
{
	int	row;

	row = 0;
	while (row < y - 2)
	{
		if (x > 0)
			ft_putchar('B');
		if (x > 1)
		{
			print_spaces(x);
			ft_putchar('B');
		}
		if (x > 0)
			ft_putchar('\n');
		row++;
	}
}

void	rush(int x, int y)
{
	if (y > 0)
		print_upper_line(x);
	print_middle_lines(x, y);
	if (y > 1)
		print_lower_line(x);
}
