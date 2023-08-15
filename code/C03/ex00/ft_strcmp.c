/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:31:55 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/23 13:03:23 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* 
int main()
{
	char str1[] = "abd";
	char str2[] = "abcd";
	
	int res = strcmp(str1, str2);
	printf("************** USING STRCMP **************\n\n");
	
	if(res < 0)
		printf("The string  of \"%s\" is less than \"%s\"\n", str1, str2);
	else if(res > 0)
		printf("The string  of \"%s\" is greater than \"%s\"\n", str1, str2);
	else
		printf("The string  of \"%s\" and \"%s\" are the same\n", str1, str2);
	
	res = ft_strcmp(str1, str2);
	printf("************** USING FT_STRCMP **************\n\n");
	
	if(res < 0)
		printf("The string  of \"%s\" is less than \"%s\"\n", str1, str2);
	else if(res > 0)
		printf("The string  of \"%s\" is greater than \"%s\"\n", str1, str2);
	else
		printf("The string  of \"%s\" and \"%s\" are the same\n", str1, str2);
} */