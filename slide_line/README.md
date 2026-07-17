# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/slide_line/a-realistic--cinematic-photograph-of-a-systems-pro.png"\>
</p>

# 2048 — Slide Line

## 🎮 Description

Ce projet consiste à reproduire la mécanique algorithmique de glissement et de fusion du jeu **2048** sur une unique ligne unidimensionnelle (un tableau d'entiers).

À partir d'un état initial, les nombres non nuls doivent être décalés vers la gauche (`SLIDE_LEFT`) ou vers la droite (`SLIDE_RIGHT`). Si deux nombres identiques entrent en collision lors du déplacement (qu'ils soient adjacents ou séparés uniquement par des zéros), ils fusionnent en un unique nombre égal à leur somme. Une fois fusionné, un nombre ne peut plus subir de nouvelle fusion durant le même coup.

## 🎓 Objectifs d'apprentissage & d'entretien

* **Manipulation de Tableaux *In-Place*** : Décaler, compacter et fusionner des éléments au sein d'un tableau sans utiliser de mémoire tampon dynamique.
* **Conception d'Algorithmes à Deux Pointeurs** : Utiliser des pointeurs de lecture/écriture pour gérer le balayage de la ligne de manière optimale.
* **Gestion des Contraintes Systèmes** : Écrire un code robuste en C standard, compilé avec des flags stricts et respectant les normes de codage et de documentation de la feuille de style **Betty**.

## 🛠️ Spécifications techniques

* **OS** : Ubuntu 14.04 LTS
* **Compilateur** : `gcc` version 4.8.4
* **Flags de Compilation** : `-Wall -Werror -Wextra -pedantic`
* **Style standard** : Conformité obligatoire avec `betty-style.pl` et `betty-doc.pl`.
* **Contrainte de Mémoire** : Interdiction absolue d'allouer de la mémoire dynamiquement (`malloc`, `calloc`, etc.).

---

## 📂 Structure du Répertoire

| Fichier | Type | Description |
| --- | --- | --- |
| `slide_line.h` | Header | Contient les définitions des macros `SLIDE_LEFT` et `SLIDE_RIGHT`, les prototypes et les *include guards*. |
| `0-slide_line.c` | Source | Contient l'implémentation de la fonction `slide_line`. |

---

## 🔬 Prototype de la Fonction

```c
int slide_line(int *line, size_t size, int direction);

```

* **`line`** : Pointeur vers le tableau d'entiers représentant la ligne à manipuler.
* **`size`** : Nombre d'éléments présents dans le tableau.
* **`direction`** : Direction du mouvement, définie par les macros `SLIDE_LEFT` ou `SLIDE_RIGHT`.
* **Retour** : Renvoie `1` en cas de succès, `0` en cas d'échec (par exemple si la direction n'est pas valide).

---

## 🛠️ Compilation et Validation

Pour compiler et tester ton implémentation avec un fichier d'entrée (comme `0-main.c`) :

```bash
# Compilation
gcc -Wall -Wextra -Werror -pedantic -o 0-slide_line 0-main.c 0-slide_line.c

# Test de glissement vers la gauche (L)
./0-slide_line L 2 2 0 0

```

### Exemples d'exécutions :

```text
# Glissement standard avec zéros intercalés :
Line: 2, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 4
Slide to the left
Line: 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

# Priorité de fusion de droite à gauche lors d'un décalage à droite :
Line: 2, 2, 2, 2, 2
Slide to the right
Line: 0, 0, 2, 4, 4

```

## ✍️ Auteur

* **Mathieu** - *Étudiant en programmation* - [GitHub Profile](https://www.google.com/search?q=https://github.com/Mathieu7483)

