/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:04:59 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/22 19:29:37 by ncarvalh         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	k = 0;
	i = ft_strlen(dest);
	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/* 
int main(){
	char str1[15] = "Hello";
	char str2[] = " World!";
	
	printf("Sending str1 = \"%s\" and str2 = \"%s\"\n", str1, str2); 
	ft_strcat(str1, str2);
	printf("Returning str1 = \"%s\" and str2 = \"%s\"\n", str1, str2); 
} */