/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:50:30 by crypto            #+#    #+#             */
/*   Updated: 2022/09/15 00:21:03 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# define ADD 0
# define SUB 1
# define MULT 2
# define DIV 3
# define MOD 4

int ft_atoi(char *str);

void ft_putchar(char c);

int ft_strlen(char *str);

void do_op(int n1, int n2, int op);

void ft_putnbr(long int n);

void ft_putstr(char *str);

int ft_add(int n1, int n2);

int ft_sub(int n1, int n2);

int ft_mult(int n1, int n2);

int ft_div(int n1, int n2);

int ft_mod(int n1, int n2);


#endif