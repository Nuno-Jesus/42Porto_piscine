/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:19:41 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/24 11:24:52 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int main(){
	char src[] = "Hello";
	char dest1[6] = "";
	char dest2[6] = "";

	printf("************* TESTING WITH strcpy() *************\n\n");
	printf("Sending dest1 = \"%s\"\n", dest1);
	printf("Returning dest1 = \"%s\"\n\n", strcpy(dest1, src));

	printf("************* TESTING WITH ft_strcpy() *************\n\n");
	printf("Sending dest2 = \"%s\"\n", dest2);
	printf("Returning dest2 = \"%s\"\n\n", ft_strcpy(dest2, src));
} */