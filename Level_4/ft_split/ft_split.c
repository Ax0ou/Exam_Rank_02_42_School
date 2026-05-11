/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarade@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** EXERCICE : ft_split - Découper une chaîne en tableau de mots
** OBJECTIF : Retourner un tableau de chaînes terminé par NULL.
**            Un "mot" est délimité par espaces, tabs ou newlines.
** Fonctions autorisées : malloc
** ÉTAPES :
**   1. is_sep() : espace, tab (\t) ou newline (\n) → séparateur.
**   2. count_words() : compter les mots (transitions séparateur → non-sep).
**   3. Allouer result[count + 1] pointeurs.
**   4. Parcourir str : sauter séparateurs, copier chaque mot dans result[j].
**   5. Terminer result par NULL.
*/

/* Retourne 1 si c est un séparateur (espace, tab, newline) */
static int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/* Compte le nombre de mots (transitions séparateur → non-séparateur) */
static int	count_words(char *str)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_sep(*str) && !in_word) /* début d'un nouveau mot */
		{
			count++;
			in_word = 1;
		}
		else if (is_sep(*str))
			in_word = 0;               /* sortie d'un mot */
		str++;
	}
	return (count);
}

/* Alloue et copie len caractères depuis start, ajoute '\0' */
static char	*ft_strdup_n(char *start, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	result = (char **)malloc((count_words(str) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))  /* sauter les séparateurs */
			i++;
		if (!str[i])                       /* fin de chaîne après séparateurs */
			break ;
		start = i;                         /* mémoriser le début du mot */
		while (str[i] && !is_sep(str[i]))
			i++;                           /* avancer jusqu'à la fin du mot */
		result[j] = ft_strdup_n(str + start, i - start);
		if (!result[j])
			return (NULL);
		j++;
	}
	result[j] = NULL;                      /* sentinelle de fin de tableau */
	return (result);
}
