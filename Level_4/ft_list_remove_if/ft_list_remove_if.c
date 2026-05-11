/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*
** EXERCICE : ft_list_remove_if - Supprimer noeuds selon un critère
** OBJECTIF : Libérer tous les noeuds dont cmp(data, data_ref) == 0.
** ÉTAPES :
**   Phase 1 : Supprimer les noeuds en TÊTE (via double pointeur begin_list).
**     - Boucle : tant que la tête matche → sauvegarder next, free, avancer.
**   Phase 2 : Supprimer les noeuds au MILIEU / FIN (via prédécesseur cur).
**     - Si cur->next matche → sauvegarder cur->next->next, free, rechaîner.
**     - Sinon → avancer cur (ne pas avancer si suppression : risque de doublons).
** NOTE : cmp retourne 0 si les données correspondent (noeud à supprimer).
** NOTE : double pointeur **begin_list nécessaire pour modifier la tête.
*/

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(void *, void *))
{
	t_list	*cur;
	t_list	*tmp;

	/* Phase 1 : supprimer les noeuds qui matchent en TÊTE */
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = (*begin_list)->next; /* sauvegarder le noeud suivant */
		free(*begin_list);         /* libérer la tête actuelle */
		*begin_list = tmp;         /* la nouvelle tête est le suivant */
	}
	/* Phase 2 : supprimer les noeuds qui matchent au MILIEU / FIN */
	cur = *begin_list;
	while (cur && cur->next)
	{
		if (cmp(cur->next->data, data_ref) == 0) /* le suivant matche */
		{
			tmp = cur->next->next; /* sauter le noeud à supprimer */
			free(cur->next);
			cur->next = tmp;       /* rechaîner cur avec le noeud d'après */
		}
		else
			cur = cur->next; /* avancer seulement s'il n'y a pas eu de suppression */
	}
}
