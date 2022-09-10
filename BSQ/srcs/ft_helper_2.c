/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:22:21 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 19:46:43 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_printable(unsigned char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_natoi(char *number, int n)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (is_digit(number[i]) && i < n)
		res = res * 10 + number[i++] - '0';
	return (res);
}

char	*ft_realloc(char *str, int size)
{
	char	*copy;

	copy = ft_new_str(size);
	ft_assert(copy != NULL, NULL);
	copy[size - 1] = '\0';
	copy = ft_strcpy(copy, str);
	free(str);
	return (copy);
}

void	ft_delete_map(t_map *map)
{
	ft_delete_str_array(map->buffer, map->lines);
	free(map);
}
