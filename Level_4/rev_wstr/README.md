## Sujet

```BASH
Nom de l'exercice : rev_wstr
Fichiers attendus : rev_wstr.c
Fonctions autorisées : write, malloc, free
--------------------------------------------------------------------------------

Écrire un programme qui prend une chaîne en paramètre et affiche ses mots dans
l'ordre inverse.

Un "mot" est une portion de la chaîne délimitée par des espaces et/ou des
tabulations, ou par le début/fin de la chaîne.

Si le nombre de paramètres est différent de 1, le programme affichera un
saut de ligne (`\n`).

Dans les paramètres qui seront testés, il n'y aura pas d'espaces "supplémentaires"
(c'est-à-dire pas d'espaces au début ni à la fin, et les mots seront toujours
séparés par exactement un espace).

Exemples :

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>

```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror rev_wstr.c -o rev_wstr`
- **Exemple :** `./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e`

Remarque : exécutez les commandes depuis la racine du dépôt.
