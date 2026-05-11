/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 17:33:33 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** EXERCICE : rev_wstr - Afficher les mots dans l'ordre inverse
** OBJECTIF : Afficher les mots de argv[1] de droite à gauche,
**            séparés par un espace unique (ignorer espaces multiples).
** ÉTAPES :
**   1. Aller à la fin de la chaîne (i = longueur).
**   2. Reculer i en sautant les espaces/tabs depuis la droite.
**   3. Mémoriser end = i (position après le dernier char du mot).
**   4. Reculer i jusqu'au début du mot (premier espace ou i == 0).
**   5. Si mot trouvé (end > i) : afficher l'espace séparateur, puis le mot.
**   6. Répéter jusqu'à i == 0.
** EXEMPLE : "hello   world  foo" → "foo world hello"
*/

/* Affiche len caractères à partir de start */
static void	print_word(char *start, int len)
{
	write(1, start, len);
}

/* Parcourt de droite à gauche et affiche chaque mot dans l'ordre inverse */
static void	rev_wstr_loop(char *str)
{
	int	i;
	int	end;
	int	wrote;

	i = 0;
	wrote = 0;
	while (str[i])               /* aller à la fin de la chaîne */
		i++;
	while (i > 0)
	{
		while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			i--;                 /* sauter les espaces depuis la droite */
		end = i;                 /* mémoriser la fin du mot */
		while (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t')
			i--;                 /* reculer jusqu'au début du mot */
		if (end > i)             /* un mot a été trouvé (end > début) */
		{
			if (wrote)
				write(1, " ", 1); /* espace séparateur avant chaque mot (sauf premier) */
			print_word(str + i, end - i);
			wrote = 1;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr_loop(av[1]);
	write(1, "\n", 1);
	return (0);
}
