/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** EXERCICE : sort_int_tab - Trier un tableau d'entiers (bubble sort)
** OBJECTIF : Trier tab[size] en ordre CROISSANT (tri à bulles).
** ÉTAPES :
**   1. Si size < 2 → déjà trié, retourner.
**   2. i = 0.
**   3. Tant que i < size - 1 :
**      - Si tab[i] > tab[i+1] : échanger les deux, repartir de i = 0.
**      - Sinon : i++ (la paire est dans le bon ordre).
**   4. Fin quand un pass complet s'est déroulé sans aucun échange.
** EXEMPLE : [3, 1, 2] → [1, 2, 3]
*/

/* Échange deux entiers via leurs adresses */
static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	if (size < 2)          /* 0 ou 1 élément → déjà trié */
		return ;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])  /* paire mal ordonnée → échanger et recommencer */
		{
			swap(&tab[i], &tab[i + 1]);
			i = 0;                 /* repartir du début après un échange */
		}
		else
			i++;                   /* paire dans le bon ordre → avancer */
	}
}
