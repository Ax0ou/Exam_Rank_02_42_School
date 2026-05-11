/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** lcm (Least Common Multiple = PPCM) :
** retourne le Plus Petit Commun Multiple de a et b.
** Si l'un des deux vaut 0, retourne 0.
**
** Formule : lcm(a, b) = (a / pgcd(a, b)) * b
** On divise avant de multiplier pour éviter tout dépassement d'entier.
**
** Exemple : lcm(4, 6) → pgcd=2, donc (4/2)*6 = 12
**           lcm(3, 7) → pgcd=1, donc (3/1)*7 = 21
*/

/*
** pgcd_euclide : calcule le PGCD par l'algorithme d'Euclide.
** Principe : pgcd(a, b) = pgcd(b, a % b) jusqu'à ce que b == 0.
** Quand b == 0, le PGCD est a.
*/
static unsigned int	pgcd_euclide(unsigned int a, unsigned int b)
{
	unsigned int	tmp;

	/* On itère : on remplace (a, b) par (b, a % b) jusqu'à b == 0 */
	while (b)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	/* Cas dégénéré : le PPCM avec 0 est défini comme 0 */
	if (a == 0 || b == 0)
		return (0);
	/* (a / pgcd) * b évite l'overflow par rapport à (a * b) / pgcd */
	return ((a / pgcd_euclide(a, b)) * b);
}
