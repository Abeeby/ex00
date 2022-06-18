/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaridel <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:18:44 by svaridel          #+#    #+#             */
/*   Updated: 2022/06/18 16:18:46 by svaridel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char    ft_atoi(char *str)
{
	int	i;
    //int    negatif;
    int    value;

	i = 0;
	while (str[i] != '\0')
	{	
		value = (str[i] - 48);
		return (value);
		i++;
	}
	return (0);
	/*
    negatif = 1;
    value = 0;
    while (*str == '\t' || *str == '\n' || *str == '\v'
        || *str == '\f' ||  *str == '\r' || *str == ' ')
        str++;

    while (*str >= '0' && *str <= '9')
    {
        value = (*str - 48) + (value * 10);
        str++;
    }
	*/
}

int main (void) 
{
    char    test[50] = "324325345";
    printf("Int value =  %d\n", ft_atoi(test));
    return 0; 
}