/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:56:56 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/08 08:32:01 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);

char	*decimal_to_base(long int n, char *base);

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

int	is_invalid(char *base)
{	
	int	i;
	int	k;

	i = 0;
	if (base == NULL)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (1);
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				return (1);
			k++;
		}	
		i++;
	}
	return (i <= 1);
}

long int	base_to_decimal(char *nbr, char *base)
{
	int			i;
	int			base_size;
	int			is_negative;
	long int	res;

	i = 0;
	res = 0;
	is_negative = 0;
	base_size = ft_strlen(base);
	while (is_space(nbr[i]))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			is_negative = !is_negative;
		i++;
	}
	while (get_index(nbr[i], base) != -1 && nbr[i] != '\0')
	{
		res = res * base_size + get_index(nbr[i], base);
		i++;
	}
	if (is_negative)
		return (-res);
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	n;
	char		*res;

	if (is_invalid(base_from) || is_invalid(base_to) || nbr == NULL)
		return (NULL);
	n = base_to_decimal(nbr, base_from);
	res = decimal_to_base(n, base_to);
	return (res);
}
/* 
int main(int argc, char **argv)
{
	char base_from[] = "0123456789ABCDEF";
	char base_to[] = "01";
	
	char *res = ft_convert_base(argv[argc - 1], base_from, base_to);
	long int n = base_to_decimal(argv[argc - 1], base_from);
	
	printf("\n\"%s\" (\"%s\") = %ld(\"0123456789\")\n",
	argv[argc - 1], base_from, n);
	printf("%ld(\"0123456789\") = %s(\"%s\")\n\n", n, res, base_to);
	
	free(res);
} */
