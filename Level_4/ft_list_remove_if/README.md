## Sujet

```BASH
Nom de l'exercice : ft_list_remove_if
Fichiers attendus : ft_list_remove_if.c
Fonctions autorisées : free
--------------------------------------------------------------------------------

Écrire une fonction nommée `ft_list_remove_if` qui supprime de la liste
passée en paramètre tout élément dont le champ `data` est "égal" à la
valeur de référence.

La fonction est déclarée ainsi :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

`cmp` prend deux `void *` et retourne `0` lorsque les deux paramètres sont
considérés égaux.

Vous devez utiliser le fichier `ft_list.h`, qui contiendra :

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>

```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror ft_list_remove_if.c -o ft_list_remove_if` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** créer un fichier `test.c` qui inclut `ft_list.h` et appelle `ft_list_remove_if`, puis : `gcc ft_list_remove_if.c test.c -o test && ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
