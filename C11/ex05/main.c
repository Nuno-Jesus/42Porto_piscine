/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:30:11 by crypto            #+#    #+#             */
/*   Updated: 2022/09/15 00:17:22 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "do_op.h"

//NEED TO CHANGE THIS SINCE IT MUST RECEIVE A STRING
int ft_is_valid(char *str)
{
    if(ft_strlen(str) != 1)
        return (0);
    return (str[0] == '+' || str[0] == '-' || str[0] == '*'
        || str[0] == '%' || str[0] == '/');
}

int ft_valid_args(char **argv, int *n1, int *n2)
{
    if (!ft_is_valid(argv[2]))
        return (-1);
    *n1 = ft_atoi(argv[1]);
    *n2 = ft_atoi(argv[3]);
    if(argv[2][0] == '+')
        return ADD;
    else if(argv[2][0] == '-')
        return SUB;
    else if(argv[2][0] == '*')
        return MULT;
    else if(argv[2][0] == '/')
        return DIV;
    else 
        return MOD;
}

int main(int argc, char **argv)
{
    int n1;
    int n2;
    int op;
    
    if(argc == 4)
    {
        op = ft_valid_args(argv, &n1, &n2);
        if (op != -1)
            do_op(n1, n2, op);
        else
            ft_putchar('0');
    }
    return (0);
}