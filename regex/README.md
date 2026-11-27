# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/regex/Regex.jpg"\>
</p>

# RegEx

Projet d'algorithmique en langage C consistant à évaluer si une chaîne de caractères correspond à une expression régulière simple prenant en charge les métacaractères `.` et `*`.

## Contexte et objectif

- **Dépôt** : `holbertonschool-interview`
- **Répertoire** : `regex`
- **Auteur de l'énoncé** : Alexandre Gautier (Holberton School)
- **Objectif** : Implémenter la fonction `regex_match(char const *str, char const *pattern)` retournant `1` si `pattern` correspond entièrement à `str`, et `0` sinon.

## Contraintes et exigences

- **Environnement** : Ubuntu 14.04 LTS.
- **Compilation** : `gcc 4.8.4` avec les drapeaux `-Wall -Werror -Wextra -pedantic`.
- **Éditeurs autorisés** : `vi`, `vim`, `emacs`.
- **Style de code** : norme Betty, vérifiée via `betty-style.pl` et `betty-doc.pl`.
- **Variables globales** : interdites.
- **Limite par fichier** : au maximum `5` fonctions par fichier source `.c`.
- **Fichier d'en-tête** : prototypes déclarés dans `regex.h`, avec garde d'inclusion (`#ifndef` / `#define` / `#endif`), poussé sur le dépôt.
- **Mise en forme** : chaque fichier doit se terminer par une nouvelle ligne.

## Structure du projet

| Fichier | Description |
| :--- | :--- |
| `regex.h` | Fichier d'en-tête protégé par garde d'inclusion contenant le prototype de `regex_match`. |
| `regex.c` | Implémente `int regex_match(char const *str, char const *pattern)`. |
| `main.c` | Fichier de test local illustrant l'appel à `regex_match` (non requis par la correction automatique). |

## Spécification de la tâche 0 : `0. Simple RegEx`

- **Prototype** : `int regex_match(char const *str, char const *pattern);`
- **Paramètres** :
  - `str` : chaîne à analyser (peut être vide ; contient tout caractère ASCII sauf `.` et `*`).
  - `pattern` : motif d'expression régulière (peut être vide ; peut contenir tout caractère ASCII, y compris `.` et `*`).
- **Règles de correspondance** :
  - `.` correspond à n'importe quel caractère unique.
  - `*` correspond à zéro ou plusieurs occurrences du caractère (ou du motif `.`) qui le précède immédiatement.
- **Valeur de retour** : `1` en cas de correspondance, `0` sinon.

## Compilation et exécution (tests locaux)

```bash
gcc -Wall -Wextra -Werror -pedantic main.c regex.c -o regex_match
./regex_match

```

Sortie attendue avec le `main.c` fourni :

```text
H -> H = 1
HH -> H = 0
HH -> H* = 1
HHHHHHHHHHHHHHHHH -> H* = 1
Holberton -> .* = 1
Alex -> .* = 1
Guillaume -> .* = 1
Julien -> .* = 1
Holberton -> Z*H.* = 1
Holberton -> Z*H.*olberton = 1
Holberton -> Z*H.*o. = 1
Holberton -> Z*H.*o = 0
Holberton -> holberton = 0
Holberton -> .olberton = 1
!H@o#l$b\%e^r&t(o)n_ -> !.@.#.$.%.^.&.(.)._ = 1

```

Vérification du style Betty :

```bash
betty-style.pl regex.c regex.h
betty-doc.pl regex.c regex.h

```
## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)