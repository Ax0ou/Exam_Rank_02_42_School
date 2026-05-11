/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

/*
** ft_list_size : compte et retourne le nombre de noeuds de la liste chaînée.
** Retourne 0 si la liste est vide (begin_list == NULL).
**
** Exemple : [A] -> [B] -> [C] -> NULL  →  retourne 3
**
** Algorithme : on parcourt la liste en suivant les pointeurs next
** et on incrémente un compteur à chaque noeud visité.
*/
int	ft_list_size(t_list *begin_list)
{
	int	len;

	len = 0;
	/* On avance noeud par noeud jusqu'en fin de liste */
	while (begin_list != NULL)
	{
		len++;
		begin_list = begin_list->next;
	}
	return (len);
}
