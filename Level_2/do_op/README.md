## Sujet

```BASH
Nom de l'exercice : do_op
Fichiers attendus : *.c, *.h
Fonctions autorisées : atoi, printf, write
--------------------------------------------------------------------------------

Écrire un programme qui prend trois chaînes:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
suivi d'un saut de ligne. Si le nombre de paramètres n'est pas 3, the program
just affiche a newline.

You can assume the string have no misprend or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Exemples :

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
```
