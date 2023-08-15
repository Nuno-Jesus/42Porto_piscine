/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:03:04 by crypto            #+#    #+#             */
/*   Updated: 2022/09/15 00:22:28 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "do_op.h"

void do_op(int n1, int n2, int op)
{
    int (*array[5])(int, int);
    
    array[ADD] = ft_add;
    array[SUB] = ft_sub;
    array[MULT] = ft_mult;
    array[DIV] = ft_div;
    array[MOD] = ft_mod;

    if(op == DIV && n2 == 0)
        ft_putstr("Stop : division by zero\n");
    else if(op == MOD && n2 == 0)
        ft_putstr("Stop : modulo by zero\n");
    else
        ft_putnbr(array[op](n1, n2));
}