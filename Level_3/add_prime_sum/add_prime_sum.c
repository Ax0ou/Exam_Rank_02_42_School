/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Affiche un entier positif chiffre par chiffre via write (récursif) */
static void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/* Convertit une string en entier positif — retourne -1 si non numérique */
static int	atoi_pos(const char *s)
{
	int	n;

	n = 0;
	if (!*s)
		return (-1);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (-1);
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n);
}

/*
** is_prime : retourne 1 si n est un nombre premier, 0 sinon.
** Méthode : on teste tous les diviseurs de 2 à sqrt(n).
** Si aucun ne divise n, il est premier.
*/
static int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
** add_prime_sum : affiche la somme de tous les nombres premiers <= argv[1].
** Exemple : ./add_prime_sum 10 → "17"  (2+3+5+7)
*/
int	main(int ac, char **av)
{
	int	n;
	int	i;
	int	sum;

	sum = 0;
	if (ac == 2)
	{
		n = atoi_pos(av[1]);
		if (n >= 2)
		{
			i = 2;
			/* On parcourt chaque entier de 2 à n et on additionne les premiers */
			while (i <= n)
			{
				if (is_prime(i))
					sum += i;
				i++;
			}
		}
	}
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
