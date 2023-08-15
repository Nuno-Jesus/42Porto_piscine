/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 07:40:15 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 19:36:51 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

# define MAXBUF 512

typedef struct s_map
{
	unsigned int	cols;
	unsigned int	lines;
	char			pillar;
	char			empty;
	char			paint;
	char			**buffer;
}t_map;

void	ft_bsq(t_map *map);

int		**ft_initiate(t_map *map);

int		ft_solve(t_map *map, int **mat, int coords[]);

void	ft_paint(t_map *map, int coords[], int n);

void	ft_delete_map(t_map *map);

void	ft_assert(int condition, char *message);

void	ft_putchar(char c);

int		ft_min_2(int n1, int n2);

int		ft_min_3(int n1, int n2, int n3);

void	ft_print_error(char *message);

int		is_digit(char c);

int		ft_natoi(char *number, int n);

int		is_printable(unsigned char c);

char	*ft_realloc(char *str, int size);

int		*ft_new_array(int n);

int		**ft_new_matrix(int n1, int n2);

void	ft_delete_matrix(int **matrix, unsigned int n1);

int		ft_strlen(char *str);

int		ft_strlen_mod(char *str, char delim);

char	*ft_strcat(char *dest, char *src);

char	*ft_new_str(int n);

char	**ft_new_str_array(unsigned int n1, unsigned int n2);

void	ft_delete_str_array(char **matrix, unsigned int n1);

void	ft_print_str_array(char **matrix, unsigned int n1, unsigned int n2);

char	*ft_strcpy(char *dest, char *src);

ssize_t	count_bytes(char *filename);

char	*read_file(char *filename);

int		ft_check_lines_length(char *file);

int		ft_check_lines_ammount(char *str);

int		ft_check_for_linebreaks(char *str);

int		ft_check_valid_chars(char *str);

int		ft_check_first_line(char *str);

char	*ft_parse_file(char *filename, char *str);

char	*read_terminal(void);

t_map	*ft_new_map(char *file);

#endif