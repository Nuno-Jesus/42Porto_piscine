/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 04:04:38 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/01 16:38:20 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_toupper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c += 'A' - 'a';
}

void	ft_tolower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c -= 'A' - 'a';
}

int	ft_is_alphanumeric(char *c)
{
	return ((*c >= 'a' && *c <= 'z')
		|| (*c >= 'A' && *c <= 'Z')
		|| (*c >= '0' && *c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_capitalized;

	i = 0;
	is_capitalized = 0;
	while (str[i] != '\0')
	{
		if (is_capitalized && ft_is_alphanumeric(&str[i]))
			ft_tolower(&str[i]);
		else if (!is_capitalized && ft_is_alphanumeric(&str[i]))
		{
			ft_toupper(&str[i]);
			is_capitalized = 1;
		}
		else if (!ft_is_alphanumeric(&str[i]))
			is_capitalized = 0;
		i++;
	}
	return (str);
}
/* 
int main(){
	char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before: %s\n", string);
	printf("After: %s\n", ft_strcapitalize(string));
} */
