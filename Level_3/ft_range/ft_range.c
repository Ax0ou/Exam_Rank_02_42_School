/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** ft_range : alloue et retourne un tableau d'entiers de start à end (exclus).
** Si start >= end, retourne NULL (plage vide).
** L'appelant est responsable de free() le tableau.
**
** Exemple : ft_range(1, 5) → [1, 2, 3, 4]   (taille 4)
**           ft_range(5, 1) → NULL
**
** IMPORTANT : malloc(len * sizeof(int)) — pas malloc(len) seul,
** car un int occupe 4 octets et non 1.
*/
int	*ft_range(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	/* Plage vide : start doit être strictement inférieur à end */
	if (start >= end)
		return (NULL);
	len = end - start;
	tab = (int *)malloc(len * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	/* Remplissage croissant : tab[0]=start, tab[1]=start+1, ... */
	while (i < len)
	{
		tab[i] = start + i;
		i++;
	}
	return (tab);
}
