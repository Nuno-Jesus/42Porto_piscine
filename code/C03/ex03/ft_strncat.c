/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:18:24 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/22 19:30:53 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	k = 0;
	i = ft_strlen(dest);
	while (src[k] != '\0' && k < nb)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/* 
int main(){
	char str1[10] = "Hello";
	char str2[] = "World!";
	
	printf("Sending str1 = \"%s\" and str2 = \"%s\"\n", str1, str2); 
	ft_strncat(str1, str2, 3);
	printf("Returning str1 = \"%s\" and str2 = \"%s\"\n", str1, str2); 
} */