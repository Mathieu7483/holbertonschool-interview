# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/img/page%20de%20garde%20interview%20Holberton.png"\>
</p>


# Palindrome Integer

## 🔢 Description

Ce projet fait partie de la série de préparation aux entretiens techniques du cursus. L'objectif est d'implémenter un algorithme optimal en langage C capable de déterminer si un entier non signé de type `unsigned long` est un palindrome (c'est-à-dire qu'il se lit de la même manière de gauche à droite et de droite à gauche, comme $121$ ou $12345678987654321$).

L'exercice pousse à l'optimisation mathématique puisqu'il interdit toute allocation dynamique de mémoire. L'évaluation de l'entier doit être réalisée directement par des manipulations arithmétiques, garantissant une complexité spatiale en $O(1)$.

## 🎓 Objectifs d'apprentissage & d'entretien

* **Algorithmique Arithmétique** : Manipuler les opérateurs de division (`/`) et de modulo (`%`) pour inverser un nombre ou isoler ses chiffres sans utiliser de chaînes de caractères (`string`).
* **Optimisation de Mémoire** : Résoudre des problèmes sous contrainte stricte de mémoire statique (pas de `malloc`).
* **Rigueur C & Style** : Écrire un code robuste, exempt de fuites, compilant avec des flags de détection stricts (`-Wall -Werror -Wextra -pedantic`) et conforme aux normes de style et de documentation **Betty**.

## 🛠️ Spécifications techniques

* **OS** : Ubuntu 14.04 LTS
* **Compilateur** : `gcc` version 4.8.4
* **Flags de Compilation** : `-Wall -Werror -Wextra -pedantic`
* **Style standard** : Conformité obligatoire avec `betty-style.pl` et `betty-doc.pl`.
* **Règles de structure** :
* Pas de variables globales.
* Maximum 5 fonctions par fichier.
* Header guards obligatoires sur le fichier de prototypes.



---

## 📂 Structure du Répertoire

| Fichier | Type | Description |
| --- | --- | --- |
| `palindrome.h` | Header | Contient le prototype de la fonction ainsi que les *include guards*. |
| `0-is_palindrome.c` | Source | Contient l'implémentation de la fonction de vérification algorithmique. |

---

## 🔬 Prototype de la Fonction

```c
int is_palindrome(unsigned long n);

```

* **`n`** : Le nombre entier non signé à analyser.
* **Retour** : `1` si le nombre est un palindrome, `0` dans le cas contraire.

---

## 🛠️ Compilation et Validation

Pour tester la fonction, tu peux utiliser un fichier de test local (par exemple `0-main.c`), mais seul le fichier source de la fonction et le header doivent être poussés sur le dépôt.

```bash
# Compilation avec les flags stricts d'Holberton
gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c

# Exécutions de test
./palindrome 121
./palindrome 112

```

### Exemples de sorties obtenues :

```text
121 is a palindrome.
112 is not a palindrome.

```

## ✍️ Auteur

* **Mathieu** - *Étudiant en programmation* - [GitHub Profile](https://www.google.com/search?q=https://github.com/Mathieu7483)
