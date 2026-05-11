## Sujet

```BASH
Nom de l'exercice : rot_13
Fichiers attendus : rot_13.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme qui prend une chaîne and affiche it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be suivi d'un saut de ligne.

Si le nombre d'arguments n'est pas 1, le programme affiche a newline.

Exemple :

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
```
