/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:56:59 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/04 02:47:05 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

//! **************************** UTILITY ****************************

void print_error(int is_dict_error)
{
	if(is_dict_error)
		write(1, "Dict Error\n", 11);
	else	
		write(1, "Error\n", 6);
}

int is_digit(unsigned char c)
{
	return (c >= '0' && c <= '9');
}

int is_printable(unsigned char c)
{
	return (c >= 32 && c <= 126);
}

//! **************************** STRING LIBRARY ****************************

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *new_string(int n)
{
	char *new;

	new = (char *)malloc(n * sizeof(char));
	if (new == NULL)
		return (NULL);
	return (new);
}

char **new_string_array(int n, int len)
{
	int i;
	int k;
	char **array;

	array = (char **)malloc(n * sizeof(char *));
	if(array == NULL)
		return (NULL);
	i = 0;
	while(i < n)
	{
		array[i] = new_string(len);
		if(array[i] == NULL)
		{
			k = 0;
			while (k < i)
			{
				free(array[k]);
				k++;
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	return (array);
}

char *ft_strdup(char *str)
{
	int i;
	int size;
	char *copy;
	
	i = 0;
	size = ft_strlen(str) + 1;
	copy = new_string(size);
	if(copy == NULL)
		return (NULL);
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void print_string_array(char **array, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d - %s\n", i, array[i]);
		i++;
	}
}

//! **************************** PAIR LIBRARY ****************************

t_pair *new_pair(unsigned int key, char *str)
{
	t_pair* new;

	new = (t_pair*)malloc(sizeof(t_pair));
	if(new == NULL)
		return (NULL);
	new->key = key;
	new->value = ft_strdup(str);
	return (new);
}

void delete_pair(t_pair* p)
{
	free(p->value);
	free(p);
}

t_pair **new_pair_array(int n)
{
	t_pair **array;

	array = (t_pair **) malloc(n * sizeof(t_pair *));
	if (array == NULL)
		return (NULL);
	return (array);
}

void delete_pair_array(t_pair **array, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		delete_pair(array[i]);
		i++;
	}
	free(array);
}

//! **************************** VECTOR LIBRARY ****************************

t_vector *new_vector(int size)
{
	t_vector* new = (t_vector *)malloc(sizeof(t_vector));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = new_pair_array(size);
	return new;
}

void delete_vector(t_vector *v)
{
	delete_pair_array(v->array, v->size);
	free(v);
}

void print_vector(t_vector *v)
{
	int i;

	i = 0;
	while (i < v->size)
	{
		printf("%d - %s\n", v->array[i]->key, v->array[i]->value);
		i++;
	}
}
//! **************************** FILE HANDLING ****************************

int count_lines(char *filename, int *max)
{
	int fd;
	int lines;
	int counter;
	unsigned char c;

	counter = 0;
	lines = 0;
	if((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	while (read(fd, &c, 1))
	{
		if(c == '\n')
		{
			if (counter > *max)
				*max = counter;
			counter = 0;
			lines++;
		}
		else
			counter++;
	}
	close(fd);
	return (lines);
}

int read_file(char *filename, char **lines)
{
	int i;
	int k;
	int fd;
	unsigned char c;
	
	i = 0;
	k = 0;
	if((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	while(read(fd, &c, 1))
	{
		if(c == '\n')
		{
			lines[i++][k] = '\0';
			k = 0;
		}
		else
			lines[i][k++] = c;
	}
	return (0);
}

t_vector *assemble_dict(char **lines, int n)
{
	int i;
	char **words;
	t_vector *v;

	i = 0;
	v = new_vector(n);
	while (i < n)
	{
		words = ft_split(lines[i]);
		v->array[i] = new_pair(ft_atou(words[0], 0), words[1]);
		i++;
	}
}

t_vector *create_dict(char *filename)
{
	int fd;
	int len;
	int size;
	char **lines;

	len = 0;
	size = count_lines(filename, &len);
	lines = new_string_array(size, len + 1);
	read_file(filename, lines);
	
	#ifdef DEBUG
		printf("---- read_dict() ----\n");
		printf("Number of lines (size): %d\n", size);
		printf("Biggest line (max): %d\n\n", len);
		print_string_array(lines, size);
	#endif
	return assemble_dict(lines, size);
}

int rush(char *filename, int number)
{
	(void)filename;
	(void)number;
	return (1);
}

unsigned int ft_atou(char *str, unsigned int *res)
{
	int i;

	i = 0;
	*res = 0;
	while (str[i] != '\0')
	{
		if(!is_digit(str[i]))
			return (0);
		*res = *res * 10 + str[i] - '0';
		i++;
	}
	return (1);
}

char	*parse_args(int argc, char **argv, unsigned int *n)
{
	char *ret;
	
	if(argc - 1 == 1)
		ret = DEFAULT_FILE;
	else
		ret = argv[1];
	
	if(!ft_atou(argv[argc - 1], n))
		return (NULL);
	return (ret);
}

int main(int argc, char **argv)
{
	//unsigned int	number;
	//char	*filename;
	t_vector *dict;
	dict = NULL;
	//number = 0;
	//filename = NULL;
	(void)argc;
	(void)argv;
/* 	
	if(argc - 1 != 1 && argc - 1 != 2)
	{
		print_error(0);
		return (3);
	}
	
	filename = parse_args(argc, argv, &number);
	if(filename == NULL)
	{
		print_error(0);
		return (2);
	}
	
	#ifdef DEBUG
		printf("Number: %u\n", number);
		printf("Filename: %s\n", filename);
	#endif */

	dict = create_dict(DEFAULT_FILE);

	if(!rush(DEFAULT_FILE, 42))
	{
		print_error(0);
		return 1;
	}
	return (EXIT_SUCCESS);
}