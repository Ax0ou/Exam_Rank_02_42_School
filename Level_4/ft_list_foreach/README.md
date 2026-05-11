## Sujet

```BASH
Nom de l'exercice : ft_list_foreach
Fichiers attendus : ft_list_foreach.c, ft_list.h
Fonctions autorisées :
--------------------------------------------------------------------------------

Écrire une fonction qui prend une liste et un pointeur de fonction, et applique
cette fonction à chaque élément de la liste.

Elle doit être déclarée comme suit :

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

La fonction pointée par `f` sera utilisée ainsi :

(*f)(list_ptr->data);

Vous devez utiliser la structure suivante et la fournir dans un fichier nommé
`ft_list.h` :

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror ft_list_foreach.c -o ft_list_foreach` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** créer un fichier `test.c` qui inclut `ft_list.h` et appelle `ft_list_foreach`, puis : `gcc ft_list_foreach.c test.c -o test && ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
