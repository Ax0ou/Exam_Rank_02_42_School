## Sujet

```BASH
Nom de l'exercice : flood_fill
Fichiers attendus : *.c, *.h
Fonctions autorisées : -
--------------------------------------------------------------------------------

Écrire une fonction qui prend un `char **` représentant un tableau 2D de
caractères, un `t_point` décrivant les dimensions de ce tableau, et un
`t_point` indiquant le point de départ.

À partir du `t_point` de départ fourni, cette fonction remplit une zone entière
en remplaçant les caractères à l'intérieur par le caractère `'F'`. Une zone
est un groupe de caractères identiques délimité horizontalement et verticalement
par d'autres caractères ou par les bords du tableau.

La fonction `flood_fill` ne remplit pas en diagonale.

La fonction `flood_fill` doit être prototypée ainsi :
  void  flood_fill(char **tab, t_point size, t_point begin);

La structure `t_point` est définie comme suit :

  typedef struct  s_point
  {
	int           x;
	int           y;
  }               t_point;

Exemple :

$> cat test.c
#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

$> gcc flood_fill.c test.c -o test; ./test
11111111
10001001
10010001
10110001
11100001

FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
$>

```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror flood_fill.c -o flood_fill` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** `gcc flood_fill.c test.c -o test; ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
