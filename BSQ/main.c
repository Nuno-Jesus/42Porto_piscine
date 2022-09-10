/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 07:40:04 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 21:53:11 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_bsq.h"

void	execute(char *file)
{
	t_map	*map;

	map = ft_new_map(file);
	ft_bsq(map);
	ft_delete_map(map);
	free(file);
}

int	main(int argc, char **argv)
{
	char	*file;
	int		i;

	i = 1;
	if (argc == 1)
	{
		file = ft_parse_file(NULL, read_terminal());
		if (file != NULL)
			execute(file);
	}
	else
	{
		while (i < argc)
		{	
			file = ft_parse_file(argv[i], NULL);
			if (file != NULL)
				execute(file);
			if (i != argc - 1)
				write(1, "\n", 1);
			i++;
		}		
	}
	return (0);
}
