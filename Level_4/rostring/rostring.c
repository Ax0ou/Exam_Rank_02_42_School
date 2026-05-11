/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 17:33:33 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** EXERCICE : rostring - Rotation des mots (1er mot → dernier)
** OBJECTIF : Afficher les mots de argv[1] avec le 1er mot déplacé en fin.
**            Les espaces multiples sont réduits à un seul espace.
** ÉTAPES :
**   1. Sauter les espaces/tabs de début pour trouver le 1er mot.
**   2. Mémoriser start (début) et end (fin) du 1er mot.
**   3. Sauter les espaces après le 1er mot.
**   4. Afficher tous les mots restants (2ème à fin) avec print_rest_words.
**   5. Si le 1er mot existe (end > start) :
**      - Afficher un espace si d'autres mots ont été affichés (i > end).
**      - Afficher le 1er mot.
** EXEMPLE : "hello world foo" → "world foo hello"
**           "  one  "        → "one"
*/

/* Retourne 1 si c est un espace ou une tabulation */
static int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

/* Avance *i en sautant tous les espaces et tabulations */
static void	skip_spaces(char *str, int *i)
{
	while (is_space(str[*i]))
		(*i)++;
}

/* Affiche les mots à partir de la position i (2ème mot et au-delà),
** séparés par un espace unique. wrote sert à éviter l'espace avant le 1er. */
static void	print_rest_words(char *str, int *i)
{
	int	wrote;

	wrote = 0;
	while (str[*i])
	{
		if (wrote)
			write(1, " ", 1);  /* espace séparateur (sauf avant le 1er mot) */
		while (str[*i] && !is_space(str[*i]))
			write(1, &str[(*i)++], 1); /* afficher un caractère et avancer */
		skip_spaces(str, i);   /* sauter les espaces après le mot */
		wrote = 1;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	start;
	int	end;

	if (ac > 1)
	{
		i = 0;
		skip_spaces(av[1], &i);         /* étape 1 : ignorer espaces de début */
		start = i;                       /* étape 2 : début du 1er mot */
		while (av[1][i] && !is_space(av[1][i]))
			i++;
		end = i;                         /* étape 2 : fin du 1er mot */
		skip_spaces(av[1], &i);         /* étape 3 : sauter espaces après */
		print_rest_words(av[1], &i);    /* étape 4 : afficher mots restants */
		if (end > start)                 /* étape 5 : afficher le 1er mot en fin */
		{
			if (i > end)
				write(1, " ", 1);       /* espace si d'autres mots précèdent */
			write(1, av[1] + start, end - start);
		}
	}
	write(1, "\n", 1);
	return (0);
}
