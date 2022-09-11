/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:07:40 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/11 13:20:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_square(int n)
{
	return n * n;
}

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
}

int main()
{
	int array[] = {2, 3, 20, 16, 25};
	int *new = ft_map(array, 5, &ft_square);
}