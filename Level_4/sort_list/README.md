## Sujet

```BASH
Nom de l'exercice : sort_list
Fichiers attendus : sort_list.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Écrire la fonction suivante :

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

Cette fonction doit trier la liste passée en paramètre en utilisant le
pointeur de fonction `cmp` pour déterminer l'ordre, et retourner un pointeur
vers le premier élément de la liste triée.

Les doublons doivent être conservés.

Les entrées seront toujours cohérentes.

Vous devez utiliser le type `t_list` décrit dans le fichier `list.h` qui vous
est fourni. Vous devez inclure ce fichier (`#include "list.h"`), mais ne
pas le rendre : nous utiliserons notre propre version pour compiler votre
travail.

Les fonctions passées en `cmp` retourneront toujours une valeur non nulle si
`a` et `b` sont dans le bon ordre, et `0` sinon.

Par exemple, la fonction suivante, utilisée comme `cmp`, triera la liste en
ordre croissant :

int ascending(int a, int b)
{
	return (a <= b);
}
```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror sort_list.c -o sort_list` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** créer `test.c` qui inclut `list.h` et appelle `sort_list`, puis : `gcc sort_list.c test.c -o test && ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
