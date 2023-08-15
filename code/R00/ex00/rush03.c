/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:17:17 by manda-si          #+#    #+#             */
/*   Updated: 2022/08/20 19:58:49 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x1;
	int	y1;

	y1 = 1;
	while (y1 <= y && x > 0)
	{
		x1 = 1;
		while (x1 <= x)
		{
			if ((x1 == 1 && y1 == 1) || (x1 == 1 && y1 == y))
				ft_putchar('A');
			else if ((x1 == x && y1 == 1) || (x1 == x && y1 == y))
				ft_putchar('C');
			else if ((x1 == 1) || (x1 == x) || (y1 == 1) || (y1 == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x1++;
		}
		ft_putchar('\n');
		y1++;
	}
}
