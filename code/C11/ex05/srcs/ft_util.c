/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:56:09 by crypto            #+#    #+#             */
/*   Updated: 2022/09/15 00:18:26 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

void ft_putnbr(long int n)
{
    if(n < 0)
        n = -n;
    if(n < 10)
        ft_putchar(n + '0');
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}