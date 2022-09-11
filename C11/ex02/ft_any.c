/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:34:10 by marvin            #+#    #+#             */
/*   Updated: 2022/09/11 13:34:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
} */

int	ft_any(char ** tab, int (*f)(char *))
{
	int	i;

	i = 0;
	if (tab == NULL || f == NULL)
		return (0);
	while (tab[i])
	{
		if(f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/* int main(int argc, char **argv)
{
	(void)argc;

	if(ft_any(argv + 1, &ft_strlen))
		printf("Found a non-empty string\n");
	else
		printf("All strings are empty\n");
} */