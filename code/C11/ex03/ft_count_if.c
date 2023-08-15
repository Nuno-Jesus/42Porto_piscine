/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:31:28 by crypto            #+#    #+#             */
/*   Updated: 2022/09/13 09:43:17 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
 */
int ft_count_if(char **tab, int length, int(*f)(char *))
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    if (tab == NULL || f == NULL || length == 0)
        return (0);
    while (i < length)
    {
        if (f(tab[i]))
            count++;
        i++;
    }
    return (count);   
}
/* 
int main(int argc, char **argv)
{
    printf("%d\n", ft_count_if(argv + 1, argc - 1, &ft_strlen));
} */