/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:06:12 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/24 11:52:08 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/* 
int main(){
	char str1[] = "abcdeghijklmnopqrstuvwxyz";
	
	if (ft_str_is_printable(str1))
		printf("The string \"%s\" is printable.\n", str1);
	else
		printf("The string \"%s\" is not printable.\n", str1);
} */