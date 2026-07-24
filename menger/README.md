# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/menger/a-realistic--cinematic-photograph-of-a-software-en.png"\>
</p>


---

# 🌀 2D Menger Sponge (Sierpinski Carpet)

## 📝 Description

Ce projet s'inscrit dans la série de préparation aux entretiens techniques (*Technical Interview Preparation*) d'Holberton School. Il vise à concevoir un programme en C capable d'afficher une représentation textuelle (sur la sortie standard) d'une **éponge de Menger en 2D** (souvent identifiée au tapis de Sierpinski) jusqu'à un niveau de récursion $N$ donné.

Une éponge de Menger 2D de niveau $N$ est une grille de $3^N \times 3^N$ caractères. Elle se construit de manière auto-similaire :

* Un niveau $N$ est découpé en un pavage $3 \times 3$ de sous-éponges de niveau $N-1$.
* La cellule centrale du motif $3 \times 3$ à **n'importe quelle échelle** est laissée vide (remplie par des espaces `' '`).
* Toutes les zones non évidées sont représentées par le caractère `'#'`.

## 📐 Logique Mathématique & Fractale

La taille $S$ de la grille pour un niveau donné $N$ est calculée par :


$$S(N) = 3^N$$

Pour déterminer si la case à la coordonnée $(x, y)$ doit afficher un caractère `'#'` ou un espace `' '` :
À chaque échelle $k$ (pour $k$ allant de $0$ à $N-1$), on calcule les coordonnées relatives dans la grille $3 \times 3$ :


$$\text{col} = \left\lfloor \frac{x}{3^k} \right\rfloor \bmod 3 \quad \text{et} \quad \text{row} = \left\lfloor \frac{y}{3^k} \right\rfloor \bmod 3$$

> **Règle d'évidement :** Si pour n'importe quelle échelle $k$, on a à la fois $\text{col} == 1$ et $\text{row} == 1$, le point $(x, y)$ se trouve dans un centre évidé $\rightarrow$ afficher un espace `' '`. Sinon $\rightarrow$ afficher `'#'`.

---

## 🛠️ Spécifications & Recommandations

* **Compilateur** : `gcc` 4.8.4 sur Ubuntu 14.04 LTS
* **Drapeaux de compilation** : `-Wall -Werror -Wextra -pedantic -lm`
* **Style de code** : Norme Betty (`betty-style.pl` et `betty-doc.pl`)
* **Contraintes C** :
* Variables globales interdites.
* Maximum 5 fonctions par fichier source `.c`.
* En-tête `menger.h` protégé contre les inclusions multiples (*include guards*).



---

## 📂 Structure du Répertoire

| Fichier | Description |
| --- | --- |
| `menger.h` | Fichier d'en-tête contenant les prototypes des fonctions et les inclusions standard. |
| `0-menger.c` | Implémentation de la fonction `menger(int level)` pour générer la fractale 2D. |
| `0-main.c` | Point d'entrée pour les tests (*non soumis au dépôt final*). |

---

## ⚙️ Compilation et Utilisation

### 1. Compilation

Pour compiler la fonction avec le fichier de test `0-main.c` :

```bash
gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm

```

### 2. Exécution

* **Niveau 0 ($3^0 = 1\times1$) :**

```bash
./0-menger 0

```

*Sortie :*

```text
#

```

* **Niveau 1 ($3^1 = 3\times3$) :**

```bash
./0-menger 1

```

*Sortie :*

```text
###
# #
###

```

* **Niveau 2 ($3^2 = 9\times9$) :**

```bash
./0-menger 2

```

*Sortie :*

```text
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########

```

* **Niveau invalide ($< 0$) :**

```bash
./0-menger -1
# (Ne produit aucune sortie)

```

---

## ✍️ Auteur

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
