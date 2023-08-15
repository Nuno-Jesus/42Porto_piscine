/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:07:23 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/04 03:11:43 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# define DEFAULT_FILE "dict_eng.dict"
# define DEBUG

typedef struct s_pair
{
	unsigned int key;
	char *value;
} t_pair;

typedef struct s_vector
{
	t_pair **array;
	int size;
} t_vector;

#endif