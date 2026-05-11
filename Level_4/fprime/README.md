## Sujet

```BASH
Nom de l'exercice : fprime
Fichiers attendus : fprime.c
Fonctions autorisées : printf, atoi
--------------------------------------------------------------------------------

Écrire un programme qui prend un entier positif et affiche ses facteurs
premiers sur la sortie standard, suivi d'un saut de ligne.

Les facteurs doivent être affichés en ordre croissant et séparés par `*`, de
manière à ce que l'expression affichée donne bien le résultat.

Si le nombre de paramètres n'est pas 1, afficher simplement un saut de ligne.

L'entrée, lorsqu'elle est fournie, sera valable.

Exemples :

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$

```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror fprime.c -o fprime`
- **Exemple :** `./fprime 225225 | cat -e`

Remarque : exécutez les commandes depuis la racine du dépôt.
