/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
** pgcd : affiche le Plus Grand Commun Diviseur (PGCD) de a et b.
**
** Utilise l'algorithme d'Euclide (itératif) :
**   pgcd(a, b) = pgcd(b, a % b)  tant que b != 0
**   quand b == 0, le résultat est a.
**
** Exemple : pgcd(42, 15) → 42%15=12, pgcd(15,12) → 15%12=3,
**           pgcd(12,3)   → 12%3=0,   pgcd(3,0)   → résultat : 3
*/
static void	pgcd(int a, int b)
{
	int	tmp;

	if (a < 0 || b < 0)
		return ;
	/* Algorithme d'Euclide : on remplace (a,b) par (b, a%b) jusqu'à b==0 */
	while (b)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	putnbr(a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}
