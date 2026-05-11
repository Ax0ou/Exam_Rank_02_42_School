/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

/*
** EXERCICE : sort_list - Trier une liste chaînée (bubble sort sur data)
** OBJECTIF : Trier lst en échangeant uniquement les data des noeuds
**            (les pointeurs next ne bougent pas).
** ÉTAPES :
**   1. Si lst == NULL → retourner NULL.
**   2. swapped = 1 pour forcer au moins un pass.
**   3. Tant que swapped != 0 :
**      a. swapped = 0 (supposer que le pass est propre).
**      b. cur = lst (repartir du début).
**      c. Tant que cur->next != NULL :
**         - Si cmp(cur->data, cur->next->data) == 0 : ordre incorrect → swap.
**         - Marquer swapped = 1.
**      d. Avancer cur.
**   4. Plus aucun échange → liste triée → retourner lst.
** NOTE : cmp retourne 1 si l'ordre est correct (a avant b), 0 sinon.
*/

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	int		swapped;
	int		tmp;

	if (!lst)
		return (lst);
	swapped = 1;
	while (swapped)                      /* continuer tant qu'un échange a eu lieu */
	{
		swapped = 0;
		cur = lst;                       /* repartir du début à chaque pass */
		while (cur->next)
		{
			if (!cmp(cur->data, cur->next->data)) /* ordre incorrect selon cmp */
			{
				tmp = cur->data;         /* échanger les données des deux noeuds */
				cur->data = cur->next->data;
				cur->next->data = tmp;
				swapped = 1;             /* signaler qu'un échange a eu lieu */
			}
			cur = cur->next;
		}
	}
	return (lst);
}
