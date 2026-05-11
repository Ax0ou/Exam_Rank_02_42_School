## Sujet

```BASH
Nom de l'exercice : last_word
Fichiers attendus : last_word.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme qui prend une chaîne and affiche its last word suivi d'un \n.

Un mot est a section of string delimited by spaces/tabs or by the start/end of
the string.

Si le nombre de paramètres n'est pas 1, or there are no words, display a newline.

Exemple :

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```
