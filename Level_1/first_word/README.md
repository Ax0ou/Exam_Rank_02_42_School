## Sujet

```BASH
Nom de l'exercice : first_word
Fichiers attendus : first_word.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme qui prend une chaîne and affiche its first word, followed by a
newline.

Un mot est a section of string delimited by spaces/tabs or by the start/end of
the string.

Si le nombre de paramètres n'est pas 1, or if there are no words, simply display
a newline.

Exemples :

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
```
