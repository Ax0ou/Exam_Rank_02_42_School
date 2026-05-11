/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

/*
** EXERCICE : flood_fill - Remplissage par diffusion (4-connexité)
** OBJECTIF : Remplacer tous les caractères connectés au point begin par 'F'.
** ÉTAPES :
**   1. Sauvegarder le caractère cible : area[begin.y][begin.x].
**   2. Appeler fill() récursivement depuis begin.
**   3. fill() : si pos hors limites ou char != target → stop.
**   4. Sinon : marquer 'F' et propager dans les 4 directions.
*/

/* Propagation récursive : marque pos puis explore haut/bas/gauche/droite */
static void	fill(char **area, t_point size, t_point pos, char target)
{
	if (pos.y < 0 || pos.y >= size.y || pos.x < 0 || pos.x >= size.x)
		return ;
	if (area[pos.y][pos.x] != target) /* hors zone ou déjà rempli → stop */
		return ;
	area[pos.y][pos.x] = 'F';        /* marquer la case comme remplie */
	fill(area, size, (t_point){pos.x - 1, pos.y}, target); /* gauche */
	fill(area, size, (t_point){pos.x + 1, pos.y}, target); /* droite */
	fill(area, size, (t_point){pos.x, pos.y - 1}, target); /* haut */
	fill(area, size, (t_point){pos.x, pos.y + 1}, target); /* bas */
}

/* Point d'entrée : lance le remplissage depuis begin avec son caractère */
void	flood_fill(char **area, t_point size, t_point begin)
{
	fill(area, size, begin, area[begin.y][begin.x]);
}
