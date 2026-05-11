/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarade@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** EXERCICE : ft_list_foreach - Appliquer f à chaque noeud
** OBJECTIF : Parcourir la liste et appeler f(node->data) pour chacun.
** ÉTAPES :
**   1. curr = begin_list (pointer local pour ne pas perdre la tête).
**   2. Tant que curr != NULL :
**      a. Appeler (*f)(curr->data).
**      b. curr = curr->next (passer au noeud suivant).
**   3. Fin quand curr == NULL.
** NOTE : (*f)(data) et f(data) sont équivalents en C, (*f) est plus explicite.
*/

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*curr;

	curr = begin_list;              /* garder un pointeur local de parcours */
	while (curr)
	{
		(*f)(curr->data);           /* appliquer f sur la donnée du noeud */
		curr = curr->next;          /* avancer au noeud suivant */
	}
}
