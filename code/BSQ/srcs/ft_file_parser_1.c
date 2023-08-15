/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_parser_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:09:06 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 21:54:42 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

ssize_t	count_bytes(char *filename)
{
	int		fd;
	ssize_t	current;
	ssize_t	total;
	char	buf[MAXBUF];

	total = 0;
	ft_assert((fd = open(filename, O_RDONLY)) != -1, "parse_file(): open()");
	while (1)
	{
		current = read(fd, buf, 1);
		if (current == 0)
			break ;
		total += current;
	}
	return (total);
}

char	*read_file(char *filename)
{
	int		i;
	int		fd;
	char	c;
	char	*file;
	ssize_t	bytes;

	i = 0;
	bytes = count_bytes(filename);
	ft_assert((file = ft_new_str(bytes + 1)) != NULL, "parse_file(): malloc()");
	ft_assert((fd = open(filename, O_RDONLY)) != -1, "parse_file(): open()");
	while (read(fd, &c, 1) > 0)
		file[i++] = c;
	file[i] = '\0';
	return (file);
}

int	ft_check_lines_length(char *str)
{
	int	i;
	int	curr_len;
	int	first_len;

	i = 0;
	curr_len = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	i++;
	first_len = ft_strlen_mod(str + i, '\n');
	i += first_len + 1;
	while (str[i] != '\0')
	{
		curr_len = ft_strlen_mod(str + i, '\n');
		if (curr_len != first_len)
			return (0);
		i += curr_len + 1;
	}
	return (first_len != 0);
}

int	ft_check_for_map(char *str)
{
	int	total;
	int	first;

	total = ft_strlen(str);
	first = ft_strlen_mod(str, '\n');
	if (total == 0 || first == total - 1 || first == total)
		return (0);
	return (1);
}

char	*ft_parse_file(char *filename, char *str)
{
	char	*file;

	if (filename == NULL)
		file = str;
	else
		file = read_file(filename);
	if (!ft_check_first_line(file) || !ft_check_lines_length(file)
		|| !ft_check_for_map(file) || !ft_check_for_linebreaks(file)
		||!ft_check_valid_chars(file))
	{
		ft_print_error("map error\n");
		return (NULL);
	}
	return (file);
}
