## Sujet

```BASH
Nom de l'exercice : add_prime_sum
Fichiers attendus : add_prime_sum.c
Fonctions autorisées : write, exit
--------------------------------------------------------------------------------

Écrire un programme qui prend un entier positif en argument et affiche la somme
de tous les nombres premiers inférieurs ou égaux à cet entier, suivi d'un saut
de ligne.

Si le nombre d'arguments n'est pas 1, ou si l'argument n'est pas un nombre
positif, afficher simplement `0` suivi d'un saut de ligne.

Exemples :

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror add_prime_sum.c -o add_prime_sum`
- **Exemple :** `./add_prime_sum 7 | cat -e`

Remarque : exécutez les commandes depuis la racine du dépôt.
