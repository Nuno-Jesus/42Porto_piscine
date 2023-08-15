/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:40:31 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/23 17:03:51 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}
/* 
int main()
{
	int size = 1;
	char str1[] = "abc";
	char str2[] = "ab";
	
	printf("************** USING STRNCMP **************\n\n");
	int res = strncmp(str1, str2, size);
	if(res < 0)
		printf("The first %d bytes of \"%s\" 
		are less than \"%s\"\n", size, str1, str2);
	else if(res > 0)
		printf("The first %d bytes of \"%s\" 
		are greater than \"%s\"\n", size, str1, str2);
	else
		printf("The first %d bytes of \"%s\" 
		and \"%s\" are the same\n", size, str1, str2);
	
	printf("************** USING FT_STRNCMP **************\n\n");
	res = ft_strncmp(str1, str2, size);
	if(res < 0)
		printf("The first %d bytes of \"%s\" 
		are less than \"%s\"\n", size, str1, str2);
	else if(res > 0)
		printf("The first %d bytes of \"%s\" 
		are greater than \"%s\"\n", size, str1, str2);
	else
		printf("The first %d bytes of \"%s\" 
		and \"%s\" are the same\n", size, str1, str2);
} */