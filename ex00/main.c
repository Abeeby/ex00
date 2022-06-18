/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaridel <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:43:03 by svaridel          #+#    #+#             */
/*   Updated: 2022/06/18 12:43:05 by svaridel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(char **str);
void	ft_putstr(char *str);
int    ft_atoi(char str);

int	main(int argc,char **argv)
{	
	(void) argc;
	(void) argv;

	char *error;

	error = "Erreur d'argument !";
	ft_atoi(**argv);

	if ((argc != 5) && (ft_atoi(**argv) < 1 || ft_atoi(**argv) > 4))
	{
		ft_putstr(error);
	}
	else
	{
		rush(argv);
	}
	return (0);
}