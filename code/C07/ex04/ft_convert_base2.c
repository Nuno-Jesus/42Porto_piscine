/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:59:34 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/08 08:27:43 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_index(char c, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*new_string(int n)
{
	char	*new;

	new = (char *)malloc((n + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new[n] = '\0';
	return (new);
}

char	*reverse(char *str)
{
	int		i;
	int		len;
	char	aux;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		aux = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = aux;
		i++;
	}
	return (str);
}

char	*append(char *str, char c)
{
	int	i;

	i = ft_strlen(str);
	str[i] = c;
	str[i + 1] = '\0';
	return (str);
}

char	*decimal_to_base(long int n, char *base)
{	
	char	*res;
	int		base_size;
	int		is_negative;

	res = new_string(50);
	is_negative = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	if (n == 0)
		res = append(res, base[0]);
	else
	{
		while (n > 0)
		{
			res = append(res, base[n % base_size]);
			n /= base_size;
		}
		if (is_negative)
			res = append(res, '-');
	}
	return (reverse(res));
}
