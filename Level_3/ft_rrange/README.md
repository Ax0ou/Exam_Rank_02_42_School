## Sujet

```BASH
Nom de l'exercice : ft_rrange
Fichiers attendus : ft_rrange.c
Fonctions autorisées : malloc
--------------------------------------------------------------------------------

Écrire la fonction suivante :

int     *ft_rrange(int start, int end);

La fonction doit allouer (avec `malloc()`) un tableau d'entiers, le remplir
avec des valeurs consécutives commençant par `end` et finissant par `start`
(incluant `start` et `end`), puis renvoyer un pointeur vers le premier
élément du tableau.

Exemples :

- Avec (1, 3) vous renverrez un tableau contenant 3, 2 et 1
- Avec (-1, 2) vous renverrez un tableau contenant 2, 1, 0 et -1
- Avec (0, 0) vous renverrez un tableau contenant 0
-- Avec (0, -3) vous renverrez un tableau contenant -3, -2, -1 et 0

```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror ft_rrange.c -o ft_rrange` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** créer un petit fichier `test.c` qui appelle `ft_rrange` puis compiler : `gcc ft_rrange.c test.c -o test && ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
