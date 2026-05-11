## Sujet

```BASH
Nom de l'exercice : str_capitalizer
Fichiers attendus : str_capitalizer.c
Fonctions autorisées : write
--------------------------------------------------------------------------------

Écrire un programme qui prend un ou plusieurs arguments (chaînes) et, pour
chaque argument, met en majuscule le premier caractère de chaque mot (si
c'est une lettre), met le reste en minuscules, et affiche le résultat sur la
sortie standard, suivi d'un \n.

Un "mot" est défini comme une portion de la chaîne délimitée par des
espaces/tabulations ou par le début/fin de la chaîne. Si un mot ne contient
qu'une seule lettre, elle doit être mise en majuscule.

S'il n'y a aucun argument, le programme doit afficher uniquement un \n.

Exemple :

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
```

**Compilation et tests hors-ligne**

- **Compiler :** `gcc -Wall -Wextra -Werror str_capitalizer.c -o str_capitalizer`
- **Exemple :** `./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e`

Remarque : exécutez les commandes depuis la racine du dépôt.
