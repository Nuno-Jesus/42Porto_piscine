/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:04:31 by crypto            #+#    #+#             */
/*   Updated: 2022/09/14 23:47:18 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int ft_add(int n1, int n2)
{
    return (n1 + n2);
}

int ft_sub(int n1, int n2)
{
    return (n1 - n2);
}

int ft_mult(int n1, int n2)
{
    return (n1 * n2);
}

int ft_div(int n1, int n2)
{
    return (n1 / n2);
}

int ft_mod(int n1, int n2)
{
    return (n1 % n2);
}