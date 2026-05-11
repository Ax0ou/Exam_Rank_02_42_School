# Exam Rank 02 — 42

> Ressource compilée et maintenue par **Axel Alvarade** ([@Ax0ou](https://github.com/Ax0ou)).

Recueil des 56 exercices susceptibles de tomber à l'**examen Rank 02** de l'École 42.
Chaque dossier contient la solution en C et un `README.md` détaillant le sujet.

## Organisation

```
Exam_Rank_02_42_School/
├── Level_1/   12 exercices  — faciles
├── Level_2/   19 exercices  — intermédiaires
├── Level_3/   15 exercices  — confirmés
└── Level_4/   10 exercices  — difficiles
```

**Total : 56 exercices.**

## Liste des exercices

| Level 1 | Level 2 | Level 3 | Level 4 |
|---|---|---|---|
| first_word | alpha_mirror | add_prime_sum | flood_fill |
| fizzbuzz | camel_to_snake | epur_str | fprime |
| ft_putstr | do_op | expand_str | ft_itoa |
| ft_strcpy | ft_atoi | ft_atoi_base | ft_list_foreach |
| ft_strlen | ft_strcmp | ft_list_size | ft_list_remove_if |
| ft_swap | ft_strcspn | ft_range | ft_split |
| repeat_alpha | ft_strdup | ft_rrange | rev_wstr |
| rev_print | ft_strpbrk | hidenp | rostring |
| rot_13 | ft_strrev | lcm | sort_int_tab |
| rotone | ft_strspn | paramsum | sort_list |
| search_and_replace | is_power_of_2 | pgcd | |
| ulstr | last_word | print_hex | |
| | max | rstr_capitalizer | |
| | print_bits | str_capitalizer | |
| | reverse_bits | tab_mult | |
| | snake_to_camel | | |
| | swap_bits | | |
| | union | | |
| | wdmatch | | |

## Compilation

Chaque exercice se compile en standalone avec les flags 42 :

```bash
cd Level_1/first_word
cc -Wall -Wextra -Werror first_word.c -o first_word
./first_word "Hello world"
```

Pour les exos avec header (`flood_fill`, `ft_list_*`, `sort_list`), compile aussi le `.h` du dossier.

## S'entraîner comme à l'examen

- ⚡ Simulateur officiel : [JCluzet/42_EXAM](https://github.com/JCluzet/42_EXAM)
- ⚡ Correction en ligne : [grademe.fr](https://grademe.fr)

## Auteur

**Axel Alvarade** — [@Ax0ou](https://github.com/Ax0ou)

## Licence

MIT © 2026 Axel Alvarade — voir [LICENSE](LICENSE).
