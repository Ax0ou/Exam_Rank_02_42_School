## Sujet

```BASH
Nom de l'exercice : rotone
Fichiers attendus : rotone.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme qui prend une chaîne and affiche it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be suivi d'un \n.

Si le nombre d'arguments n'est pas 1, le programme affiche \n.

Exemple :

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
```
