/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
** paramsum : affiche le nombre d'arguments passés au programme (hors argv[0]).
** ac vaut 1 si aucun argument n'est passé (seul le nom du programme).
** Donc ac - 1 donne bien le nombre d'arguments utilisateur.
**
** Exemple : ./paramsum a b c → "3"
**           ./paramsum         → "0"
*/
int	main(int ac, char **av)
{
	(void)av;
	putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
