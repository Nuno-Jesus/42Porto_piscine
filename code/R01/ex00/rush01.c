/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:07:27 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/31 18:16:24 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		verify_left_view(char **board, int n, int row);

int		verify_top_view(char **board, int n, int col);

int		in_column(char **board, int row, int col, int digit);

int		in_row(char **board, int row, int col, int digit);

void	print_solution(char **board, int n);

void	print_error(void);

void	set_conditions(char **board, char **conds, int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		board[0][i] = conds[0][i - 1];
		board[n + 1][i] = conds[1][i - 1];
		board[i][0] = conds[2][i - 1];
		board[i][n + 1] = conds[3][i - 1];
		i++;
	}
}

char	**new_matrix(int n1, int n2)
{
	char	**board;
	int		i;

	i = 0;
	board = (char **)malloc((n1) * sizeof(char *));
	if (board == NULL)
		return (NULL);
	while (i < n1)
	{
		board[i] = (char *)malloc((n2) * sizeof(char));
		if (board[i++] == NULL)
			return (NULL);
	}
	return (board);
}

char	**create_board(int n)
{
	char	**board;
	int		i;
	int		k;

	board = new_matrix(n + 2, n + 2);
	i = 0;
	while (i < n + 2)
	{
		k = 0;
		while (k < n + 2)
			board[i][k++] = '0';
		i++;
	}
	return (board);
}

void	rush_recursive(char **board, int row, int col, int n)
{
	int	i;

	i = 1;
	while (i <= n && row != n + 1 && col != n + 1)
	{
		if (!in_column(board, row, col, i) && !in_row(board, row, col, i))
		{
			board[row][col] = i + '0';
			if (row == n && !verify_top_view(board, n, col))
				return ;
			if (col == n)
			{
				if (verify_left_view(board, n, row))
				{
					rush_recursive(board, row + 1, 1, n);
					if (row == n && verify_top_view(board, n, col))
						print_solution(board, n);
				}
			}
			else
				rush_recursive(board, row, col + 1, n);
		}
		i++;
	}
}

void	rush(int n, char **conds)
{
	char	**board;

	board = create_board(n);
	set_conditions(board, conds, n);
	rush_recursive(board, 1, 1, n);
	if (board[0][0] == '0')
		print_error();
}
