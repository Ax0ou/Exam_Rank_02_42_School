/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Retourne 1 si c est une lettre alphabétique, 0 sinon */
static int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* Retourne la version minuscule de c (si c est une majuscule) */
static char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* Retourne la version majuscule de c (si c est une minuscule) */
static char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
** str_capitalizer : pour chaque argument, met en MAJUSCULE la DERNIÈRE
** lettre de chaque mot et en MINUSCULE toutes les autres lettres.
** Les non-lettres sont affichés tels quels.
**
** Exemple : ./str_capitalizer "hElLo wOrLd" → "hellO worlD"
**
** Mécanisme : un char est "fin de mot" si le char suivant est un espace,
** un tab, ou le '\0' de fin de chaîne.
*/
int	main(int ac, char **av)
{
	int		arg;
	int		i;
	char	c;

	if (ac == 1)
		write(1, "\n", 1);
	arg = 1;
	while (arg < ac)
	{
		i = 0;
		while (av[arg][i])
		{
			/* On force tout en minuscule d'abord */
			c = to_lower(av[arg][i]);
			/* Si c est une lettre ET que le char suivant termine le mot → majuscule */
			if (is_alpha(c) && (av[arg][i + 1] == ' '
					|| av[arg][i + 1] == '\t' || av[arg][i + 1] == '\0'))
				c = to_upper(c);
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		arg++;
	}
	return (0);
}
