/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:39:53 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/29 11:44:16 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/* 
int main(){
	char string[] = "Hello";

	printf("*********** TEST WITH strlen() ***********\n\n");
	printf("Length of \"%s\" = %ld\n\n", string, strlen(string));
	
	printf("*********** TEST WITH ft_strlen() ***********\n\n");
	printf("Length of \"%s\" = %d\n\n", string, ft_strlen(string));
} */
