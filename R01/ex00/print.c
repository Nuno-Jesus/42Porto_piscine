/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:08:58 by tlope-de          #+#    #+#             */
/*   Updated: 2022/08/28 19:31:40 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_solution(char **board, int n)
{
	int	i;
	int	k;

	i = 1;
	if (board[0][0] == '1')
		return ;
	board[0][0] = '1';
	while (i <= n)
	{
		k = 1;
		while (k <= n)
		{
			ft_putchar(board[i][k++]);
			if (k != n + 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
/* 
void	print_board(char **board, int n)
{
	int	i;
	int	k;

	i = 0;
	while (i < n + 2)
	{
		k = 0;
		while (k < n + 2)
		{
			ft_putchar(board[i][k++]);
			if (k != n + 2)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
} */
