/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_row_column.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlope-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:06:37 by tlope-de          #+#    #+#             */
/*   Updated: 2022/08/28 16:06:41 by tlope-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	in_row(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < col)
		if (board[row][i++] == digit + '0')
			return (1);
	return (0);
}

int	in_column(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < row)
		if (board[i++][col] == digit + '0')
			return (1);
	return (0);
}
