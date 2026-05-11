/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_atoi_base : convertit la string str en entier selon la base donnée.
** Gère le signe '-', les chiffres 0-9 et les lettres a-f / A-F.
** S'arrête au premier caractère invalide pour la base.
**
** Exemple : ft_atoi_base("ff",  16) →  255
**           ft_atoi_base("-10",  2) →   -2
**           ft_atoi_base("42",  10) →   42
*/

/* Retourne la valeur numérique d'un char hexadécimal, ou -1 si invalide */
static int	char_val(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int base)
{
	int	sign;
	int	result;
	int	val;

	sign = 1;
	result = 0;
	/* Gestion du signe négatif en tête de chaîne */
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	/* Conversion char par char : on s'arrête si la valeur est hors base */
	while (*str)
	{
		val = char_val(*str);
		if (val < 0 || val >= base)
			break ;
		result = result * base + val;
		str++;
	}
	return (sign * result);
}
