# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/linear_skip/Skiplist.png"\>
</p>

---
# C - Search Algorithms: Skip List (Linear Skip)

##  Description

Ce projet fait partie du cursus de préparation aux entretiens techniques d'**Holberton School**. 

L'objectif est d'implémenter un algorithme de recherche rapide (**Linear Skip**) sur une **Skip List** à un niveau d'express (*Express Lane*). La Skip List est une structure de données basée sur une liste simplement chaînée augmentée d'une voie rapide (*express lane*) permettant de sauter des sous-ensembles d'éléments et de réduire la complexité temporelle d'une recherche linéaire classique de $\mathcal{O}(n)$ à $\mathcal{O}(\sqrt{n})$.

---

## 📐 Structure de données

Chaque nœud de la liste contient une valeur entière, son index dans la liste, un pointeur vers le nœud suivant (`next`) et un pointeur vers le nœud suivant dans l'express lane (`express`).

```c
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: Singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

```

---

## ⚙️ Compilation et Exécution

### PRÉREQUIS

* Compilateur : `gcc` (version 4.8.4 ou supérieure)
* Drapeaux de compilation obligatoires : `-Wall -Wextra -Werror -pedantic`
* Bibliothèque mathématique : `-lm` *(nécessaire pour le calcul du pas de l'express lane $\sqrt{n}$)*

### Compilation

Pour compiler l'ensemble des fichiers du projet :

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o 0-linear_skip -lm

```

### Exécution

```bash
./0-linear_skip

```

---

## 🚀 Utilisation & Exemple

### Prototype de la fonction

```c
skiplist_t *linear_skip(skiplist_t *head, int value);

```

* **`head`** : Pointeur vers la tête de la Skip List.
* **`value`** : Valeur entière recherchée.
* **Retour** : Pointeur vers le premier nœud contenant `value`, ou `NULL` si la valeur est absente ou si `head` est `NULL`.

### Exemple de sortie

Pour une liste de 16 éléments et une recherche de la valeur `53` :

```text
List :
Index [0] = [0]
Index [1] = [1]
Index [2] = [4]
Index [3] = [7]
Index [4] = [12]
Index [5] = [15]
Index [6] = [18]
Index [7] = [19]
Index [8] = [23]
Index [9] = [53]
Index [10] = [61]
Index [11] = [62]
Index [12] = [76]
Index [13] = [77]
Index [14] = [79]
Index [15] = [99]

Express lane :
Index [0] = [0]
Index [4] = [12]
Index [8] = [23]
Index [12] = [76]

Value checked at index [4] = [12]
Value checked at index [8] = [23]
Value checked at index [12] = [76]
Value found between indexes [8] and [12]
Value checked at index [8] = [23]
Value checked at index [9] = [53]
Found 53 at index: 9

```

---

## 📁 Arborescence du Projet

```text
.
├── 0-linear_skip.c      # Implémentation de l'algorithme linear_skip
├── 0-main.c             # Fichier de test principal
├── create_skiplist.c    # Utilitaire : Création d'une skip list
├── print_skiplist.c     # Utilitaire : Affichage de la liste et de l'express lane
├── free_skiplist.c      # Utilitaire : Libération de la mémoire de la liste
└── search.h             # Fichier d'en-tête (prototypes et structures)

```

---

## 👤 Auteur

* **Mathieu** — Student at [Holberton School](https://www.holbertonschool.com/)

```

```