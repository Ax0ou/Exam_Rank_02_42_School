/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Convertit une string décimale en entier positif, retourne 0 si invalide */
static int	atoi_pos(const char *s)
{
	int	n;

	n = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n);
}

/*
** put_hex : affiche n en hexadécimal minuscule (base 16).
** Récursif : on affiche d'abord les chiffres de poids fort.
** La base "0123456789abcdef" permet d'indexer directement le bon char.
**
** Exemple : n=255 → n/16=15 ("f"), n%16=15 ("f") → affiche "ff"
*/
static void	put_hex(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		put_hex(n / 16);
	write(1, &base[n % 16], 1);
}

/*
** print_hex : affiche argv[1] (entier décimal) en hexadécimal minuscule.
** Exemple : ./print_hex 255 → "ff"
**           ./print_hex 16  → "10"
*/
int	main(int ac, char **av)
{
	if (ac == 2)
		put_hex((unsigned int)atoi_pos(av[1]));
	write(1, "\n", 1);
	return (0);
}
