/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:21:41 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/07 21:41:14 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_min_2(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

int	ft_min_3(int n1, int n2, int n3)
{
	return (ft_min_2(n1, ft_min_2(n2, n3)));
}

void	ft_print_error(char *message)
{
	write(STDERR_FILENO, message, ft_strlen(message));
}

void	ft_assert(int condition, char *message)
{
	if (!condition)
	{
		if (message != NULL)
			ft_print_error(message);
		exit(EXIT_FAILURE);
	}
}
