/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:29:22 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/31 14:39:43 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

int	get_base_symbol(char digit, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == digit)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_invalid(char *base)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (base[i] != '\0')
	{
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				return (1);
			k++;
		}
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (1);
		i++;
	}
	return (i <= 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	number;
	int	base_size;
	int	is_negative;

	i = 0;
	number = 0;
	base_size = ft_strlen(base);
	is_negative = 0;
	if (is_invalid(base))
		return (0);
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			is_negative = !is_negative;
	while (get_base_symbol(str[i], base) != -1 && str[i] != '\0')
		number = base_size * number + get_base_symbol(str[i++], base);
	if (is_negative)
		return (-number);
	return (number);
}

int main(void){
	char base[] = "0123456789";
	char number[] = "123 4";
	//char hexbase[] = "0123456789ABCDEF";
	//char binbase[] = "01";
	//char decbase[] = "0123456789";
	//char octbase[] = "poneyvif";

	printf("Sending number = \"%s\" and base = \"%s\"\n", number, base);
	printf("Returning number = \"%d\"\n", ft_atoi_base(number, base));
}