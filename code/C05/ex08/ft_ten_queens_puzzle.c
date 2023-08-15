/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:27:17 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 13:03:38 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(int *solution)
{
	int	i;

	i = 0;
	while (i < 10)
		ft_putchar(solution[i++] + '0');
	ft_putchar('\n');
}

int	can_attack(int *pos, int q)
{
	int	x;

	x = 0;
	while (x < q)
	{
		if (pos[x] == pos[q] && x != q)
			return (1);
		if (x != q)
		{
			if (pos[x] == pos[q] - (q - x)
				|| pos[x] == pos[q] + (q - x))
				return (1);
		}
		x++;
	}
	return (0);
}

void	ft_ten_queens_puzzle_recursive(int positions[], int pos, int *sols)
{
	int	i;

	i = 0;
	if (pos == 10)
	{
		print_solution(positions);
		(*sols)++;
	}
	else
	{
		while (i <= 9)
		{
			positions[pos] = i;
			if (!can_attack(positions, pos))
				ft_ten_queens_puzzle_recursive(positions, pos + 1, sols);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	positions[10];
	int	sols;

	sols = 0;
	ft_ten_queens_puzzle_recursive(positions, 0, &sols);
	return (sols);
}
/* 
int main()
{
	return ft_ten_queens_puzzle();
} */