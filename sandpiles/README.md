<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/sandpiles/an-abstract-fractal-pattern-inspired-by-the-abelia.png"\>
</p>

# Sandpiles Sum

## 🥪 Description

Ce projet implémente l'algorithme de sommation de deux "tas de sable" (Sandpiles) de taille $3 \times 3$. Un tas de sable est représenté par une grille d'entiers où chaque cellule contient un nombre de grains de sable.

La règle d'or est la **stabilité** :

* Un tas de sable est **stable** si aucune cellule ne contient plus de **3 grains**.
* Si une cellule contient **4 grains ou plus**, elle s'effondre (**toppling**) : elle garde le reste de la division par 4 et distribue 1 grain à chacun de ses voisins directs (haut, bas, gauche, droite).

## 🎓 Objectifs d'apprentissage

* Manipulation de tableaux bidimensionnels (2D) en C.
* Algorithmes itératifs de stabilisation.
* Contraintes de mémoire : interdiction d'utiliser `malloc` (allocation statique uniquement).
* Respect des normes de codage **Betty**.

## 🛠️ Spécifications techniques

* **Système** : Ubuntu 14.04 LTS.
* **Compilateur** : `gcc 4.8.4` avec les flags `-Wall -Werror -Wextra -pedantic`.
* **Style** : Norme Betty (Style et Documentation).
* **Fichier d'en-tête** : `sandpiles.h` (include guarded).

## 📂 Structure du projet

| Fichier | Description |
| --- | --- |
| [sandpiles.h](https://www.google.com/search?q=./sandpiles.h) | Contient le prototype de la fonction et les structures nécessaires. |
| [0-sandpiles.c]() | Cœur de l'algorithme : calcul de la somme et stabilisation de la grille. |

## 🚀 Tâche Principale

| # | Tâche | Fichier | Description |
| --- | --- | --- | --- |
| **0** | **Sandpiles sum** | `0-sandpiles.c` | Calcule la somme de deux grilles et stabilise `grid1`. |

## 🕹️ Fonctionnement de l'algorithme

1. Additionner `grid2` à `grid1` (cellule par cellule).
2. Tant que `grid1` est instable :
* Afficher la grille actuelle.
* Identifier toutes les cellules instables ($\ge 4$).
* Effectuer le "toppling" (effondrement) simultané de ces cellules.



## 💻 Exemple de compilation et exécution

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
./0-sandpiles

```

---

## ✍️ Auteur

* **Mathieu** - *Étudiant en programmation (41 ans)* - [GitHub Profile]()

			}
	}
}
