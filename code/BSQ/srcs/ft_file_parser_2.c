/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_parser_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:09:10 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 21:46:59 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	ft_check_for_linebreaks(char *str)
{
	int	i;
	int	lines;
	int	counter;

	i = 0;
	counter = -1;
	lines = ft_natoi(str, ft_strlen_mod(str, '\n') - 3);
	while (str[i])
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (lines == counter);
}

int	ft_check_valid_chars(char *str)
{
	int		i;
	int		len;
	char	empty;
	char	pillar;

	i = 0;
	len = ft_strlen_mod(str, '\n');
	pillar = str[len - 2];
	empty = str[len - 3];
	while (str[i + len])
	{
		if (str[i + len] != pillar && str[i + len] != empty
			&& str[i + len] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_first_line(char *str)
{
	int	i;
	int	n;
	int	len;
	int	size;

	i = 0;
	size = 0;
	len = ft_strlen_mod(str, '\n');
	n = ft_natoi(str, len - 3);
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	while (i < len)
		if (!is_printable(str[i++]))
			return (0);
	if (str[len - 1] == str[len - 2] || str[len - 2] == str[len - 3]
		|| str[len - 1] == str[len - 3])
		return (0);
	return (size + 3 == len && ft_natoi(str, len - 3) > 0);
}

char	*read_terminal(void)
{
	int				i;
	char			*file;
	unsigned char	c;

	i = 0;
	file = ft_new_str(1);
	file[0] = '\0';
	while (read(STDIN_FILENO, &c, 1) > 0)
	{
		file = ft_realloc(file, i + 2);
		file[i] = c;
		i++;
	}
	return (file);
}

t_map	*ft_new_map(char *file)
{
	int		i;
	int		k;
	int		aux;
	t_map	*map;

	i = -1;
	k = 0;
	aux = ft_strlen_mod(file, '\n');
	map = (t_map *)malloc(sizeof(t_map));
	ft_assert(map != NULL, "ft_store(): malloc()");
	map->lines = ft_natoi(file, aux - 3);
	map->cols = ft_strlen_mod(file + aux + 1, '\n');
	map->empty = file[aux - 3];
	map->pillar = file[aux - 2];
	map->paint = file[aux - 1];
	map->buffer = ft_new_str_array(map->lines, map->cols);
	while (file[++i + aux])
	{
		if (file[i + aux] != '\n')
		{
			map->buffer[k / map->cols][k % map->cols] = file[i + aux];
			k++;
		}
	}
	return (map);
}
