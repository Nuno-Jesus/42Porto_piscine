/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:08:55 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 19:49:39 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_new_str(int n)
{
	char	*str;

	str = (char *)malloc(n * sizeof(char));
	ft_assert(str != NULL, "Allocation failed on ft_new_str()\n");
	return (str);
}

char	**ft_new_str_array(unsigned int n1, unsigned int n2)
{
	unsigned int	i;
	char			**array;

	i = 0;
	array = (char **)malloc(n1 * sizeof(char *));
	ft_assert(array != NULL, "Allocation failed on ft_new_str_array()\n");
	while (i < n1)
		array[i++] = ft_new_str(n2);
	return (array);
}

void	ft_delete_str_array(char **matrix, unsigned int n1)
{
	unsigned int	i;

	i = 0;
	while (i < n1)
		free(matrix[i++]);
	free(matrix);
}

void	ft_print_str_array(char **matrix, unsigned int n1, unsigned int n2)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (i < n1)
	{
		k = 0;
		while (k < n2)
		{
			ft_putchar(matrix[i][k]);
			k++;
		}
		ft_putchar('\n');
		i++;
	}
}
