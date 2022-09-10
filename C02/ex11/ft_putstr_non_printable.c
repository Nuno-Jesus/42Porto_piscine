/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 06:25:50 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/30 16:19:32 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	is_non_printable(unsigned char c)
{
	return (c < 32 || c > 126);
}

void	print_hex(unsigned char c)
{
	char	*hexbase;

	hexbase = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexbase[c / 16]);
	ft_putchar(hexbase[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_non_printable(str[i]))
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/* 
int main(){
	char string[] = "Coucou\ntu vas bien ?";
	
	ft_putstr_non_printable(string);
} */