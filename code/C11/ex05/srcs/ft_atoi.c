/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:31:33 by crypto            #+#    #+#             */
/*   Updated: 2022/09/14 10:02:44 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_is_space(char c)
{
    return ((c >= '\t' && c <= '\r') || c == ' ');
}

int ft_is_signal(char c)
{
    return (c == '-' || c == '+');
}

int ft_is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_atoi(char *str)
{
    int i;
    int res;
    int signal;

    i = 0;
    res = 0;
    signal = 1;
    while (ft_is_space(str[i]))
        i++;
    while (ft_is_signal(str[i]))
    {
        if(str[i] == '-')
            signal = signal * -1;
        i++;
    }
    while(ft_is_digit(str[i]))
        res = res * 10 + str[i++] - '0';
    return (res * signal);
}