/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** ft_rrange : comme ft_range mais dans l'ordre décroissant (de end-1 à start).
** Si end <= start, retourne NULL (plage vide).
** L'appelant est responsable de free() le tableau.
**
** Exemple : ft_rrange(1, 5) → [4, 3, 2, 1]   (taille 4)
**           ft_rrange(5, 1) → NULL
*/
int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	len;
	int	i;

	/* Plage vide : end doit être strictement supérieur à start */
	if (end <= start)
		return (NULL);
	len = end - start;
	tab = (int *)malloc(len * sizeof(int));
	if (!tab)
		return (NULL);
	i = 0;
	/* Remplissage décroissant : tab[0]=end-1, tab[1]=end-2, ... */
	while (i < len)
	{
		tab[i] = end - 1 - i;
		i++;
	}
	return (tab);
}
