/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crypto <crypto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 07:50:04 by crypto            #+#    #+#             */
/*   Updated: 2022/09/14 09:27:21 by crypto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_bigger(int n1, int n2)
{
    return (n1 - n2);
}

int ft_is_sort(int *tab, int length, int (*f)(int, int))
{
    int i;
    
    i = 0;
    if(tab == NULL || length == 0 || f == NULL)
        return (0);
    while(i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
            return (0);
        i++;     
    }
    return (1);
}

int main(void)
{
    int array[] = {3, 3};
    int size = 2;

    printf("%d\n", ft_is_sort(array, size, &is_bigger));
}