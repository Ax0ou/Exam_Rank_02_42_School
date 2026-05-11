/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** expand_str : comme epur_str, mais les mots sont séparés par 3 espaces
** au lieu d'un seul. Les espaces en début et fin sont supprimés.
**
** Exemple : ./expand_str "  hello   world  " → "hello   world"
**
** Algorithme :
**   1. Sauter les espaces/tabs de tête.
**   2. Écrire les chars du mot courant.
**   3. Sauter les espaces/tabs inter-mots.
**   4. S'il reste un mot, écrire exactement 3 espaces séparateurs.
*/
int	main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
		i = 0;
		/* Étape 1 : on ignore les espaces en début de chaîne */
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			/* Étape 2 : on écrit tous les chars du mot courant */
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			{
				write(1, &av[1][i], 1);
				i++;
			}
			/* Étape 3 : on consomme tous les espaces inter-mots */
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			/* Étape 4 : s'il y a un mot suivant, on insère 3 espaces */
			if (av[1][i])
				write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
	return (0);
}
