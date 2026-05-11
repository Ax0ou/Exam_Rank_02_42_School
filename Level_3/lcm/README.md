## Sujet

```BASH
Nom de l'exercice : lcm
Fichiers attendus : lcm.c
Fonctions autorisées :
--------------------------------------------------------------------------------

Écrire une fonction qui prend deux `unsigned int` en paramètres et retourne
leur PPCM calculé.

Le PPCM (Plus Petit Commun Multiple) de deux entiers non nuls est le plus
petit entier positif divisible par les deux entiers.

Un PPCM peut être calculé de deux façons :

- Calculer les multiples de chaque entier jusqu'à trouver un multiple commun
autre que 0.

- Utiliser le PGCD (Plus Grand Commun Diviseur) de ces deux entiers et
calculer comme suit :

  PPCM(x, y) = | x * y | / PGCD(x, y)

  | x * y | signifie « valeur absolue du produit de x par y »

Si au moins un entier est nul, le PPCM vaut 0.

Votre fonction doit être prototypée comme suit :

  unsigned int    lcm(unsigned int a, unsigned int b);
  ```

  **Compilation et tests hors-ligne**

  - **Compiler :** `gcc -Wall -Wextra -Werror lcm.c -o lcm` (si un fichier de test est fourni, compilez avec ce test)
  - **Exemple :** créer un fichier `test.c` qui appelle `lcm` puis : `gcc lcm.c test.c -o test && ./test`

  Remarque : exécutez les commandes depuis la racine du dépôt.
```
