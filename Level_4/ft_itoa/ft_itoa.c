/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarade@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/05/04 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** EXERCICE : ft_itoa - Entier → chaîne de caractères
** OBJECTIF : Allouer et retourner la représentation ASCII de nbr.
** Fonctions autorisées : malloc
** ÉTAPES :
**   1. Convertir nbr en long int → évite l'overflow de INT_MIN (-n safe).
**   2. count_digits() : compter les chiffres + 1 si négatif (pour '-').
**   3. Allouer len + 1 octets, poser '\0' en fin.
**   4. Si négatif : poser '-' en [0], rendre n positif (safe avec long).
**   5. Remplir de droite à gauche : chiffre = n % 10, n /= 10.
** EXEMPLE : ft_itoa(-2147483648) → "-2147483648"
*/

/* Compte les caractères nécessaires (signe inclus si négatif) */
static int	count_digits(long int n)
{
	int	len;

	len = (n <= 0) ? 1 : 0;   /* '0' ou '-' comptent pour 1 caractère */
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long int	n;
	int			len;
	char		*str;

	n = (long int)nbr;         /* long int pour gérer INT_MIN sans overflow */
	len = count_digits(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';           /* sentinelle de fin de chaîne */
	if (n < 0)
	{
		str[0] = '-';          /* signe négatif en position 0 */
		n = -n;                /* rendre n positif (safe car long int) */
	}
	while (len > (nbr < 0))   /* s'arrêter après le '-' si négatif */
	{
		len--;
		str[len] = (n % 10) + '0'; /* chiffre le moins significatif */
		n /= 10;
	}
	return (str);
}
