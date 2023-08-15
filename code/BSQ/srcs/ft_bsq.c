/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 07:51:01 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 19:35:57 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

void	ft_paint(t_map *map, int coords[], int n)
{
	int	x;
	int	y;

	y = coords[1];
	while (y < coords[1] + n)
	{
		x = coords[0];
		while (x < coords[0] + n)
		{
			map->buffer[y][x] = map->paint;
			x++;
		}
		y++;
	}
}

int	**ft_initiate(t_map *map)
{
	unsigned int	i;
	int				**matrix;

	i = 0;
	matrix = ft_new_matrix(map->lines, map->cols);
	while (i < map->cols)
	{
		if (map->buffer[0][i] == map->pillar)
			matrix[0][i] = 0;
		else
			matrix[0][i] = 1;
		i++;
	}
	i = 0;
	while (i < map->lines)
	{
		if (map->buffer[i][0] == map->pillar)
			matrix[i][0] = 0;
		else
			matrix[i][0] = 1;
		i++;
	}
	return (matrix);
}

int	ft_solve(t_map *map, int **mat, int coords[])
{
	unsigned int	y;
	unsigned int	x;
	int				max;

	y = 0;
	max = 0;
	while (++y < map->lines)
	{
		x = 0;
		while (++x < map->cols)
		{
			if (map->buffer[y][x] == map->pillar)
				mat[y][x] = 0;
			else
				mat[y][x] = ft_min_3(mat[y][x - 1],
						mat[y - 1][x], mat[y - 1][x - 1]) + 1;
			if (mat[y][x] > max)
			{
				max = mat[y][x];
				coords[0] = x - max + 1;
				coords[1] = y - max + 1;
			}
		}
	}
	return (max);
}

void	ft_bsq(t_map *map)
{
	int	**matrix;
	int	coords[2];
	int	n;

	matrix = ft_initiate(map);
	n = ft_solve(map, matrix, coords);
	ft_paint(map, coords, n);
	ft_print_str_array(map->buffer, map->lines, map->cols);
	ft_delete_matrix(matrix, map->lines);
}
