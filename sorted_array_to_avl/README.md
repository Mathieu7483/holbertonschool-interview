# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/sorted_array_to_avl/ASL%20binary%20tree.png"\>
</p>

---

# 🎄 Array to AVL Tree

## 📝 Description

Ce projet fait partie de la série de préparation aux entretiens techniques (*Technical Interview Preparation*) d'Holberton School. L'objectif est de construire un **arbre AVL** (arbre binaire de recherche auto-équilibré) à partir d'un tableau d'entiers déjà trié par ordre croissant.

Puisque le tableau fourni est trié et ne contient aucun doublon, la structure d'équilibrage parfaite de l'AVL ($\Delta h \le 1$) doit être obtenue **sans effectuer de rotation** (contrairement à l'insertion classique élément par élément).

## 💡 Approche Algorithmique : Diviser pour Régner

Pour obtenir un arbre équilibré sans rotation à partir d'un tableau trié, l'algorithme applique une stratégie récursive de type **Diviser pour Régner** (*Divide and Conquer*) :

1. **Sélection de la racine** : L'élément central du tableau devient la racine du sous-arbre courant (pour garantir un nombre égal ou quasi-égal de nœuds à gauche et à droite).
2. **Construction récursive** :
* La moitié gauche du tableau est utilisée pour construire récursivement le sous-arbre gauche.
* La moitié droite du tableau est utilisée pour construire récursivement le sous-arbre droit.


3. **Cas de base** : Quand la sous-partie du tableau devient vide, la récursion s'arrête et retourne `NULL`.

Grâce à cette méthode, la hauteur de l'arbre est garantie d'être $O(\log N)$, respectant ainsi la propriété stricte d'un arbre AVL, avec une complexité temporelle de construction en $O(N)$.

---

## 🛠️ Spécifications & Recommandations

* **Environnement** : Ubuntu 14.04 LTS | `gcc` 4.8.4
* **Flags de compilation** : `-Wall -Werror -Wextra -pedantic`
* **Style de code** : Respect strict du style **Betty** (`betty-style.pl` et `betty-doc.pl`).
* **Contraintes strictes** :
* Rotations interdites.
* Maximum **3 fonctions** autorisées dans `0-sorted_array_to_avl.c`.
* Variables globales interdites.
* *Include guards* obligatoires dans `binary_trees.h`.



---

## 📐 Structures de Données

Les structures sont définies dans le fichier d'en-tête `binary_trees.h` :

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;

```

---

## 📂 Structure du Répertoire

| Fichier | Description |
| --- | --- |
| `binary_trees.h` | Fichier d'en-tête contenant les définitions des structures et les prototypes. |
| `0-sorted_array_to_avl.c` | Contient la fonction principale `sorted_array_to_avl` et ses fonctions auxiliaires (max 3 au total). |

---

## 🔬 Prototype de la Fonction

```c
avl_t *sorted_array_to_avl(int *array, size_t size);

```

* **`array`** : Pointeur vers le premier élément du tableau d'entiers à convertir.
* **`size`** : Nombre d'éléments dans le tableau.
* **Retour** : Pointeur vers le nœud racine de l'arbre AVL créé, ou `NULL` en cas d'échec d'allocation.

---

## ⚙️ Compilation et Exécution

### 1. Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-sorted_array_to_avl.c -o 0-sorted_array_to_avl

```

### 2. Exécution

```bash
./0-sorted_array_to_avl

```

**Exemple de sortie :**

```text
(001)(002)(020)(021)(022)(032)(034)(047)(062)(068)(079)(084)(087)(091)(095)(098)
                 .-----------------(047)-----------------.
       .-------(021)-------.                   .-------(084)-------.
  .--(002)--.         .--(032)--.         .--(068)--.         .--(091)--.
(001)     (020)     (022)     (034)     (062)     (079)     (087)     (095)--.
                                                                           (098)

```

---

## ✍️ Auteur

* **Mathieu** - *Holberton School* - [Profil GitHub](https://www.google.com/search?q=https://github.com/Mathieu7483)