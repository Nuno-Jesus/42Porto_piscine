/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:46:39 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/09/04 03:49:52 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *str)
{
	int i;
	int size;
	char *copy;
	
	i = 0;
	size = ft_strlen(str) + 1;
	copy = (char *)malloc(size);
	if (copy == NULL)
		return (NULL);
	if(copy == NULL)
		return (NULL);
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int count_words(char *str)
{
	int i;
	int words;
	int last_delim;
	
	i = 0;
	words = 0;
	last_delim = -1;
	while (str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == ':')
		{
			if(last_delim != i - 1)
				words++;
			last_delim = i;	
		}
		i++;
	}
	if(str[i - 1] != ' ' && str[i - 1] != ':' && i - 1 >= 0)
		words++;
	return (words);
}

char **ft_split(char *str)
{
	int i;
	int k;
	char **words;
	
	i = 0;
	k = 0;
	words = (char **) malloc((count_words(str) + 1) * sizeof(char *));
	while (str[i] != '\0')
	{
		while(str[i] == ' ' || str[i] == ':')
			i++;
		while(str[i] != ' ' && str[i] != ':')
			i++;
		if(str[i] == '\0')
			break;
		str[i] = '\0';
		words[k++] = ft_strdup(str);
		str += i + 1;
		i = 0;
	}
	if(str[i - 1] != ' ' && str[i - 1] != ':')
		words[k++] = str;
	words[k] = NULL;
	return (words);
}

int main(int argc, char **argv)
{
	(void)argc;
	char **words = ft_split("  a b");
	
	
	int i;
	for(i = 0; words[i] != NULL; i++)
		printf("%d - %s\n", i, words[i]);
	printf("%d - %s\n", i, words[i]);
}
