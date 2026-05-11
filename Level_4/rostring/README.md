## Sujet

```BASH
Nom de l'exercice : rostring
Fichiers attendus : rostring.c
Fonctions autorisées : write, malloc, free
--------------------------------------------------------------------------------

Écrire un programme qui prend une chaîne et affiche cette chaîne après avoir
fait une rotation d'un mot vers la gauche.

Ainsi, le premier mot devient le dernier, et les autres conservent leur ordre.

Un "mot" est défini comme une portion de la chaîne délimitée par des
espaces/tabulations, ou par le début/fin de la chaîne.

Les mots seront séparés par un seul espace dans la sortie.

S'il y a moins d'un argument, le programme affiche un saut de ligne (\n).

Exemple :

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$>

```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror rostring.c -o rostring`
- **Exemple :** `./rostring "Que la      lumiere soit et la lumiere fut"`

Remarque : exécutez les commandes depuis la racine du dépôt.
