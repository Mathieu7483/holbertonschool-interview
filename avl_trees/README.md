# AVL Trees

Projet d'algorithmique et de structures de données en langage C consacré à la vérification et à la manipulation d'arbres binaires de recherche auto-équilibrés de type AVL.

## Contexte et objectif

- **Dépôt** : `holbertonschool-interview`
- **Répertoire** : `avl_trees`
- **Auteur de l'énoncé** : Alexa Orrico (Holberton School)
- **Objectif** : Développer des fonctions en C respectant les propriétés des arbres AVL (un arbre binaire de recherche dont la différence de hauteur entre sous-arbres gauche et droit est au plus de `1` pour chaque nœud, et dont chaque sous-arbre est lui-même un BST valide).

## Contraintes et exigences

- **Environnement** : Ubuntu 14.04 LTS.
- **Compilation** : `gcc 4.8.4` avec les drapeaux `-Wall -Werror -Wextra -pedantic`.
- **Éditeurs autorisés** : `vi`, `vim`, `emacs`.
- **Style de code** : norme Betty, vérifiée avec `betty-style.pl` et `betty-doc.pl`.
- **Variables globales** : interdites.
- **Limite par fichier** : au maximum `5` fonctions par fichier source `.c`.
- **Bibliothèque standard** : autorisée.
- **Fichier d'en-tête** : prototypes et structures déclarés dans `binary_trees.h`, avec garde d'inclusion (`#ifndef` / `#define` / `#endif`) et poussé sur le dépôt.
- **Mise en forme** : chaque fichier doit se terminer par une nouvelle ligne.

## Structures de données

### Nœud d'arbre binaire (`binary_tree_t`)

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

```

### Type arbre AVL (`avl_t`)

```c
typedef struct binary_tree_s avl_t;

```

## Structure du projet

| Fichier | Description |
| --- | --- |
| `binary_trees.h` | Fichier d'en-tête contenant les structures `binary_tree_t` / `avl_t` et les prototypes des fonctions. |
| `0-binary_tree_is_avl.c` | Implémente `int binary_tree_is_avl(const binary_tree_t *tree)` pour vérifier si un arbre binaire est un arbre AVL valide. |
| `0-main.c` | Fichier de test local (non requis par la correction automatique). |
| `binary_tree_print.c` | Fonction utilitaire d'affichage d'arbre fournie pour les tests locaux. |
| `libavl.a` | Bibliothèque statique fournie pour compiler les tests locaux. |

## Spécification de la tâche 0 : `0. Is AVL`

* **Prototype** : `int binary_tree_is_avl(const binary_tree_t *tree);`
* **Paramètre** : `tree`, pointeur vers le nœud racine de l'arbre à vérifier.
* **Valeur de retour** : `1` si `tree` est un arbre AVL valide, `0` sinon (y compris si `tree` vaut `NULL`).
* **Critères de validité** :
1. `tree` est un arbre binaire de recherche (BST) valide.
2. Pour chaque nœud, la différence de hauteur entre le sous-arbre gauche et le sous-arbre droit est comprise entre `-1` et `1` inclus.
3. Les sous-arbres gauche et droit sont eux-mêmes des arbres binaires de recherche valides.



## Compilation et exécution (tests locaux)

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_is_avl.c -L. -lavl -o 0-is_avl
./0-is_avl

```

Vérification du style Betty :

```bash
betty-style.pl 0-binary_tree_is_avl.c binary_trees.h
betty-doc.pl 0-binary_tree_is_avl.c binary_trees.h
```

---

## ✍️ Auteur

* **Mathieu** - *Holberton School* - [Profil GitHub](https://www.google.com/search?q=https://github.com/Mathieu7483)