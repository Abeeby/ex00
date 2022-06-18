/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaridel <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:03:47 by svaridel          #+#    #+#             */
/*   Updated: 2022/06/18 12:03:50 by svaridel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p)
{
    int x; 
	int	y;
    int tab[4][4];

    y = 0;

    while (y < 4) 
    {
        x = 0;
          while (x < 4)
        {
              tab[y][x] = (x + y * 2 +y / 2) % 4 + 1 ; 
             x++;
        }
        y++; 
    }
    x = 0;
    while (x < 4) 
    {
        y = 0;
        while (y < 4)
        {
            printf("%d ", tab[x][y]);
            y++;
        }
        printf("\n");
        x++;
    }
}

int main()
{
	rush(4, 2, 2, 1, 1, 3, 2, 2, 4, 2, 3, 1, 1, 2, 2 ,2);
}