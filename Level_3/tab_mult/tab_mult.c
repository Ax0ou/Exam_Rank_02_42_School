/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/* Affiche une chaîne de caractères via write */
static void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* Affiche un entier positif chiffre par chiffre via write (récursif) */
static void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/*
** tab_mult : affiche la table de multiplication de mult (de 1 à 9).
** Format de chaque ligne : "i x mult = résultat"
**
** Exemple : ./tab_mult 9
**   1 x 9 = 9
**   2 x 9 = 18
**   ...
**   9 x 9 = 81
*/
static void	tab_mult(int mult)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		putnbr(i);
		put_str(" x ");
		putnbr(mult);
		put_str(" = ");
		putnbr(i * mult);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(atoi(argv[1]));
	return (0);
}
