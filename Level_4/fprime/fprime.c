/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarade@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** EXERCICE : fprime - Facteurs premiers
** OBJECTIF : Afficher les facteurs premiers de n séparés par '*'.
** Fonctions autorisées : write, atoi
** ÉTAPES :
**   1. nbr <= 0 → ne rien faire.
**   2. nbr == 1 → afficher "1" (cas spécial).
**   3. divisor = 2.
**   4. Tant que nbr > 1 :
**      - Si nbr % divisor == 0 : afficher divisor, nbr /= divisor.
**        Afficher '*' seulement si nbr > 1 après division.
**      - Sinon : divisor++ (pas besoin de reset, le diviseur ne régresse pas).
** EXEMPLE : fprime(12) → "2*2*3"  /  fprime(7) → "7"
*/

/* Affiche un entier positif chiffre par chiffre (récursif) */
static void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n / 10);        /* afficher les dizaines d'abord */
	c = (n % 10) + '0';       /* convertir le chiffre des unités en char */
	write(1, &c, 1);
}

static void	fprime(int nbr)
{
	int	divisor;

	if (nbr <= 0)
		return ;
	if (nbr == 1)              /* cas spécial : 1 s'affiche directement */
	{
		write(1, "1", 1);
		return ;
	}
	divisor = 2;               /* premier candidat à tester */
	while (nbr > 1)
	{
		if (nbr % divisor == 0)  /* divisor est un facteur premier de nbr */
		{
			putnbr(divisor);
			nbr = nbr / divisor;  /* réduire nbr de façon explicite */
			if (nbr > 1)
				write(1, "*", 1); /* séparateur si d'autres facteurs suivent */
		}
		else
			divisor++;           /* pas un facteur → essayer le suivant */
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
