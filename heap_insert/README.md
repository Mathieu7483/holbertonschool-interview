<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/heap_insert/a-dynamic-visualization-of-an-insertion-in-a-max-b.png"\>
</p>

# Binary Trees: Heap Insert

## 🌳 Description

Ce projet porte sur l'implémentation initiale des arbres binaires en langage C, avec un focus particulier sur la création de nœuds et l'insertion dans un **Max Binary Heap** (Tas binaire maximum). Un Max Heap est un arbre binaire complet où chaque nœud parent est supérieur ou égal à ses enfants.

## 🎓 Objectifs d'apprentissage

  * Comprendre la structure d'un **Binary Tree** (nœud, parent, gauche, droite).
  * Maîtriser l'allocation dynamique de mémoire pour des structures complexes.
  * Apprendre la différence entre un arbre binaire classique et un **Max Binary Heap**.
  * Pratiquer la récursion pour parcourir ou modifier les arbres.

## 🛠️ Spécifications techniques

  * **Système** : Ubuntu 14.04 LTS.
  * **Compilateur** : `gcc 4.8.4` avec les flags `-Wall -Werror -Wextra -pedantic`.
  * **Style** : Respect strict du style **Betty**.
  * **Contraintes** : Pas de variables globales, maximum 5 fonctions par fichier.

## 📂 Structure du projet

| Fichier | Description |
| :--- | :--- |
| [binary\_trees.h](https://www.google.com/search?q=./binary_trees.h) | Fichier d'en-tête contenant les structures de données et les prototypes. |
| [0-binary\_tree\_node.c](https://www.google.com/search?q=./0-binary_tree_node.c) | Fonction de création d'un nouveau nœud de base. |
| [1-heap\_insert.c](https://www.google.com/search?q=./1-heap_insert.c) | Fonction d'insertion d'une valeur dans un Max Binary Heap. |

## 🏗️ Structure de données

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s heap_t;
```

## 🚀 Utilisation (Tâche 0)

Pour créer un nœud :

```c
binary_tree_t *node = binary_tree_node(parent, value);
```

### Exemple de compilation

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
./0-node
```

## ✍️ Auteur

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
