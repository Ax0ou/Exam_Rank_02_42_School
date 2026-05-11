## Sujet

```BASH
Nom de l'exercice : search_and_replace
Fichiers attendus : search_and_replace.c
Fonctions autorisées : write, exit
--------------------------------------------------------------------------------

Écrire un programme nommé search_and_replace that prend 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

Si le nombre d'arguments n'est pas 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string suivi d'un saut de ligne.

Exemples :
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
```
