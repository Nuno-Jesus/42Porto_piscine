/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:25:39 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/05 10:06:49 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	int		n;
	char	*dest;

	n = ft_strlen(src);
	dest = (char *)malloc((n + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
/* 
int main(int argc, char **argv)
{
	if(argc != 2)
		return (0);
	printf("*************** TESTING WITH strdup() ***************\n\n");

	printf("Sending src = \"%s\"\n", argv[1]);
	printf("Returning \"%s\"\n\n", strdup(argv[1]));
	
	printf("*************** TESTING WITH ft_strdup() ***************\n\n");

	printf("Sending src = \"%s\"\n", argv[1]);
	printf("Returning \"%s\"\n\n", ft_strdup(argv[1]));

	return (0);
} */