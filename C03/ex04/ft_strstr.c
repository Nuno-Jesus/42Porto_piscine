/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:34:02 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/08/30 15:13:36 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	needle_in_haystack(char *haystack, char *needle)
{
	int	i;

	i = 0;
	while (needle[i] != '\0')
	{
		if (needle[i] != haystack[i])
			return (0);
		i++;
	}	
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			if (needle_in_haystack(str + i, to_find))
				return (str + i);
		i++;
	}	
	return ((void *)0);
}

int main(){
	char needle[] = "cousa";
	char haystack[] = "Qualquer coisa";
	
	printf("************** USING STRSTR **************\n\n");
	
	char *res = strstr(haystack, needle);
	if(res){
		printf("Found the needle (\"%s\") in haystack (\"%s\")\n\n", needle, haystack);
		printf("%s\n", res);
	}
	
	else
		printf("Couldn't find the needle (\"%s\") in haystack (\"%s\")\n\n", needle, haystack);
	
	printf("************** USING FT_STRSTR **************\n\n");
	
	res = ft_strstr(haystack, needle);
	if(res){
		printf("Found the needle (\"%s\") in haystack (\"%s\")\n\n", needle, haystack);
		printf("%s\n", res);
	}
	
	else
		printf("Couldn't find the needle (\"%s\") in haystack (\"%s\")\n\n", needle, haystack);
} 