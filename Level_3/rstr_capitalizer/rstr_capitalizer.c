/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/22 08:14:28 by aalvard          ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int		arg;
	int		i;
	int		new_word;
	char	c;

	if (ac == 1)
		write(1, "\n", 1);
	arg = 1;
	while (arg < ac)
	{
		i = 0;
		new_word = 1;
		while (av[arg][i])
		{
			c = to_lower(av[arg][i]);
			/* Première lettre d'un mot → majuscule */
			if (new_word && is_alpha(c))
				c = to_upper(c);
			/* On remet new_word à 1 après chaque espace/tab */
			new_word = (av[arg][i] == ' ' || av[arg][i] == '\t');
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		arg++;
	}
	return (0);
}
