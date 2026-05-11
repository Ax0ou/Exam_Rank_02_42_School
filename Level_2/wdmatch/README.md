## Sujet

```BASH
Nom de l'exercice : wdmatch
Fichiers attendus : wdmatch.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme qui prend deux chaînes et vérifie s'il est possible
d'écrire la première chaîne avec des caractères de la seconde, en respectant
l'ordre d'apparition de ces caractères dans la seconde chaîne.

Si c'est possible, le programme affiche la chaîne, suivie de \n,
sinon il affiche simplement \n.

Si le nombre d'arguments n'est pas 2, le programme affiche \n.

Exemples :

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
```
