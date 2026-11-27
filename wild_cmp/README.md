
# Wild Compare

Projet d'algorithmique en langage C portant sur la comparaison de chaînes de caractères avec prise en charge du caractère générique `*` (wildcard), sans boucle ni bibliothèque standard.

## Contexte et objectif

- **Dépôt** : `holbertonschool-interview`
- **Répertoire** : `wild_cmp`
- **Auteur de l'énoncé** : Alexa Orrico (Holberton School)
- **Objectif** : Implémenter la fonction `wildcmp(char *s1, char *s2)` déterminant si deux chaînes peuvent être considérées comme identiques lorsque `s2` contient un ou plusieurs caractères génériques `*` (chaque `*` pouvant remplacer n'importe quelle séquence de caractères, y compris une chaîne vide).

## Contraintes et exigences

- **Environnement** : Ubuntu 14.04 LTS.
- **Compilation** : `gcc 4.8.4` avec les drapeaux `-Wall -Werror -Wextra -pedantic`.
- **Éditeurs autorisés** : `vi`, `vim`, `emacs`.
- **Style de code** : norme Betty, vérifiée via `betty-style.pl` et `betty-doc.pl`.
- **Boucles interdites** : aucune boucle (`for`, `while`, `do...while`) n'est autorisée (approche récursive attendue).
- **Variables interdites** : aucune variable globale ni variable `static`.
- **Bibliothèque standard** : interdite dans les fichiers sources du projet.
- **Limite par fichier** : au maximum `5` fonctions par fichier source `.c`.
- **Fichier d'en-tête** : prototype déclaré dans `holberton.h`, poussé sur le dépôt.
- **Mise en forme** : chaque fichier doit se terminer par une nouvelle ligne.

## Structure du projet

| Fichier | Description |
| :--- | :--- |
| `holberton.h` | Fichier d'en-tête contenant le prototype de `wildcmp`. |
| `0-wildcmp.c` | Implémente `int wildcmp(char *s1, char *s2)`. |
| `0-main.c` | Fichier de test local illustrant l'appel à `wildcmp` (non requis par la correction automatique). |

## Spécification de la tâche 0 : `0. Wild Compare`

- **Prototype** : `int wildcmp(char *s1, char *s2);`
- **Paramètres** :
  - `s1` : chaîne de caractères de référence.
  - `s2` : motif pouvant contenir le caractère générique `*`.
- **Valeur de retour** : `1` si `s1` et `s2` correspondent selon la règle du joker `*`, `0` sinon.

## Compilation et exécution (tests locaux)

```bash
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-wildcmp.c -o 0-wildcmp
./0-wildcmp

```

Sortie attendue avec le `0-main.c` fourni :

```text
111111101100

```

Vérification du style Betty :

```bash
betty-style.pl 0-wildcmp.c holberton.h
betty-doc.pl 0-wildcmp.c holberton.h

```
---

## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
