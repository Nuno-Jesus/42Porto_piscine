/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:26:27 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/08 08:21:15 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_full_len(char **strs, char *sep, int size)
{
	int	i;
	int	lens;

	i = 0;
	lens = 0;
	while (i < size)
	{
		if (strs[i] == NULL)
			return (-1);
		lens += ft_strlen(strs[i]);
		i++;
	}
	return (lens + (size - 1) * ft_strlen(sep));
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
	src[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		k;
	int		n;
	char	*res;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	k = -1;
	n = ft_full_len(strs, sep, size);
	if (n == -1 || strs == NULL || sep == NULL)
		return (NULL);
	res = (char *)malloc((n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (++k < size)
	{
		ft_strcpy(res, strs[k]);
		res += ft_strlen(strs[k]);
		if (k < size - 1)
		{
			ft_strcpy(res, sep);
			res += ft_strlen(sep);
		}
	}
	*res = '\0';
	return (res - n);
}
/* 
int main(int argc, char **argv)
{	
	char *res;
	printf("Sending the words: ");
	for(int i = 1; i < argc - 1; i++)
		printf("\"%s\" ", argv[i]);
	printf("\n");
	
	printf("Sending the separator: \"%s\"\n", argv[argc - 1]);
	res = ft_strjoin(argc - 2, argv + 1, argv[argc - 1]);

	if(!res)
		printf("Null pointer, aborting\n");
	else
		printf("Returning: \"%s\" with %d\n", res, ft_strlen(res));
	free(res);
} */