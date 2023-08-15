/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:29:42 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/28 19:58:35 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	**new_matrix(int n1, int n2);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	test_dimensions(int n, int max, char *str)
{
	return (n % 4 == 0 && n / 4 >= max
		&& n / 4 <= 9 && 8 * (n / 4) - 1 == ft_strlen(str));
}

int	verify_params(int n, char **argv)
{	
	int		i;
	int		counter;
	char	max;

	i = 0;
	max = '1';
	counter = 0;
	while (argv[n - 1][i] != '\0')
	{
		if (argv[n - 1][i] >= '1' && argv[n - 1][i] <= '9' && i % 2 == 0)
		{
			counter++;
			if (argv[n - 1][i] > max)
				max = argv[n - 1][i];
		}
		else if (argv[n - 1][i] != ' ')
			return (0);
		i++;
	}
	if (test_dimensions(counter, max - '0', argv[1]))
		return (counter / 4);
	return (0);
}

char	**create_conds(int n, char *str)
{
	char	**conds;
	int		i;
	int		k;

	i = 0;
	k = 0;
	conds = new_matrix(4, n);
	while (k < n)
	{
		conds[0][k] = str[i];
		conds[1][k] = str[i + 2 * n];
		conds[2][k] = str[i + 4 * n];
		conds[3][k++] = str[i + 6 * n];
		i += 2;
	}
	return (conds);
}
