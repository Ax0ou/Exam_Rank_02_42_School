## Sujet

```BASH
Nom de l'exercice : sort_int_tab
Fichiers attendus : sort_int_tab.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Écrire la fonction suivante :

void sort_int_tab(int *tab, unsigned int size);

Elle doit trier (en place) le tableau `tab` d'entiers contenant exactement
`size` éléments, par ordre croissant.

Les doublons doivent être conservés.

Les entrées sont toujours cohérentes.
```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror sort_int_tab.c -o sort_int_tab` (si un fichier de test est fourni, compilez avec ce test)
- **Exemple :** créer `test.c` qui appelle `sort_int_tab` puis : `gcc sort_int_tab.c test.c -o test && ./test`

Remarque : exécutez les commandes depuis la racine du dépôt.
