## Sujet

```BASH
Nom de l'exercice : ft_split
Fichiers attendus : ft_split.c
Fonctions autorisées : malloc
--------------------------------------------------------------------------------

Écrire une fonction qui prend une chaîne, la sépare en mots, et les renvoie
sous la forme d'un tableau de chaînes terminé par `NULL`.

Un "mot" est défini comme une portion de la chaîne délimitée par des
espaces/tabulations/sauts de ligne, ou par le début/fin de la chaîne.

Votre fonction doit être déclarée comme suit :

char    **ft_split(char *str);
```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror ft_split.c -o ft_split` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** créer `test.c` qui appelle `ft_split` puis : `gcc ft_split.c test.c -o test && ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
