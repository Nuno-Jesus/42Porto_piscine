/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:08:57 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 19:50:44 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	*ft_new_array(int n)
{
	int	*array;

	array = (int *)malloc(n * sizeof(int));
	ft_assert(array != NULL, "Allocation failed on ft_new_array()\n");
	return (array);
}

int	**ft_new_matrix(int n1, int n2)
{
	int	i;
	int	**array;

	i = 0;
	array = (int **)malloc(n1 * sizeof(int *));
	ft_assert(array != NULL, "Allocation failed on ft_new_matrix()\n");
	while (i < n1)
		array[i++] = ft_new_array(n2);
	return (array);
}

void	ft_delete_matrix(int **matrix, unsigned int n1)
{
	unsigned int	i;

	i = 0;
	while (i < n1)
		free(matrix[i++]);
	free(matrix);
}
