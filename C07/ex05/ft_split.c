/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:21:59 by marvin            #+#    #+#             */
/*   Updated: 2022/09/04 21:21:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_delimiter(char c, char *delims)
{
	int	i;

	i = 0;
	while (delims[i])
	{
		if (delims[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_mod(char *str, char *delims)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_delimiter(str[i], delims))
		i++;
	return (i);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(n + 1);
	if (dup == NULL)
		return (NULL);
	while (str[i] && i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_wordcount(char *str, char *delims)
{
	int	i;
	int	len;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && ft_is_delimiter(str[i], delims))
			i++;
		len = ft_strlen_mod(str + i, delims);
		if (len > 0)
			words++;
		i += len;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		len;
	char	**words;

	k = 0;
	i = 0;
	words = (char **)malloc((ft_wordcount(str, charset) + 1) * sizeof(char *));
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_is_delimiter(str[i], charset))
			i++;
		len = ft_strlen_mod(str + i, charset);
		if (len > 0)
			words[k++] = ft_strndup(str + i, len);
		i += len;
	}
	words[k] = NULL;
	return (words);
}
/* 
void ft_print_array(char **array)
{
	int i;

	if (array == NULL)
		printf("Array is NULL\n");
	else
	{
		for(i = 0; array[i] != NULL; i++)
			printf("%d - %s\n", i, array[i]);
		printf("%d - NULL\n", i);
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	
	ft_print_array(ft_split(argv[1], argv[2]));
}  */