/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvard <aalvarad@student.42lausanne.ch    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 00:00:00 by aalvard           #+#    #+#             */
/*   Updated: 2026/04/20 00:00:00 by aalvard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** hidenp : vérifie si s1 est une "sous-séquence" de s2.
** Affiche "1" si tous les chars de s1 apparaissent dans s2
** dans le même ordre (pas forcément consécutifs), "0" sinon.
**
** Exemple : s1="abc", s2="aXbYcZ" → "1"  (a,b,c trouvés dans l'ordre)
**           s1="abc", s2="acb"    → "0"  (b vient après c dans s2)
**
** Algorithme :
**   - On avance dans s2 (j) char par char.
**   - Quand on trouve s2[j] == s1[i], on avance aussi dans s1 (i++).
**   - Si on atteint la fin de s1 (\0), tous les chars ont été trouvés.
*/
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		/* On parcourt s2 en tentant de "consommer" s1 caractère par caractère */
		while (argv[1][i] && argv[2][j])
		{
			/* Correspondance trouvée : on avance dans s1 */
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		/* Si on a épuisé s1, elle est bien cachée dans s2 */
		if (!argv[1][i])
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
