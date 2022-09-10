/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:20:32 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 11:53:32 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_spaces(int num_chars)
{
	int	k;

	k = 0;
	write(1, "00", 2);
	if (num_chars % 2 == 1)
		write(1, " ", 1);
	while (k < 40 - 2 * (num_chars + 1) - (num_chars + 1) / 2)
	{
		write(1, " ", 1);
		k++;
	}
}

void	print_hex_address(unsigned char *addr)
{
	int					i;
	char				hexcode[16];
	unsigned long int	address;

	i = 16;
	address = (unsigned long int) addr;
	while (i > 0)
	{	
		if (address % 16 < 10)
			hexcode[i - 1] = (address % 16) + '0';
		else
			hexcode[i - 1] = (address % 16) + ('a' - 10);
		address /= 16;
		i--;
	}
	write(1, hexcode, 16);
	write(1, ": ", 2);
}

void	print_hex_line(unsigned char *str)
{
	int		i;
	char	*hexabase;

	i = 0;
	hexabase = "0123456789abcdef";
	while (str[i] != '\0' && i < 16)
	{
		write(1, &hexabase[str[i] / 16], 1);
		write(1, &hexabase[str[i] % 16], 1);
		i++;
		if (i % 2 == 0)
			write(1, " ", 1);
	}
	if (str[i] == '\0')
	{
		print_spaces(i);
	}	
}

void	print_string_chars(unsigned char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < 16)
	{
		if (str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	if (str[i] == '\0')
		write(1, ".", 1);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		print_hex_address(addr + i);
		print_hex_line(addr + i);
		print_string_chars(addr + i);
		i += 16;
	}
	return (addr);
}
/* 
int main(){
	char string[] = "Bonjour les aminches...c est 
	fo u\ttout\tce qu on peut faire avec.\f\bprint_memory....lol.lol. ";

	ft_print_memory(string, 92);
} */