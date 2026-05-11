## Sujet

```BASH
Nom de l'exercice : repeat_alpha
Fichiers attendus : repeat_alpha.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme nommé repeat_alpha that prend une chaîne and display it
repeating each alphabetical character as many times as its alphabetical index,
suivi d'un saut de ligne.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

Si le nombre d'arguments n'est pas 1, just display a newline.

Exemples :

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
```
