/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:29:29 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/24 11:27:37 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* 
int main(){
	char src[] = "";
	char dest1[6] = "";
	char dest2[6] = "";
	int size = 3;

	printf("************* TESTING WITH strncpy() *************\n\n");
	printf("Sending dest1 = \"%s\"\n", dest1);
	printf("Returning dest1 = \"%s\"\n\n", strncpy(dest1, src, size));

	printf("************* TESTING WITH ft_strncpy() *************\n\n");
	printf("Sending dest2 = \"%s\"\n", dest2);
	printf("Returning dest2 = \"%s\"\n\n", ft_strncpy(dest2, src, size));
} */