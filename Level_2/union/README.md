## Sujet

```BASH
Nom de l'exercice : union
Fichiers attendus : union.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme qui prend deux chaînes and affiche, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be suivi d'un \n.

Si le nombre d'arguments n'est pas 2, le programme affiche \n.

Exemple :

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
```
