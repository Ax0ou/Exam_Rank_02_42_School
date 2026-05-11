## Sujet

```BASH
Nom de l'exercice : ft_itoa
Fichiers attendus : ft_itoa.c
Fonctions autorisées : malloc
--------------------------------------------------------------------------------

Écrire une fonction qui prend un `int` et le convertit en une chaîne
terminée par un caractère nul. La fonction renvoie le résultat dans un tableau
de `char` que vous devez allouer.

Votre fonction doit être déclarée comme suit :

char	*ft_itoa(int nbr);
```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror ft_itoa.c -o ft_itoa` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** créer `test.c` qui appelle `ft_itoa` puis : `gcc ft_itoa.c test.c -o test && ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
