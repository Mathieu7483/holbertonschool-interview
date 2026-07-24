# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/nqueens/Nqueens.png"\>
</p>

---

# 👑 N Queens Puzzle

## 📝 Description

Ce projet fait partie de la série de préparation aux entretiens techniques (*Technical Interview Preparation*) d'Holberton School. Il consiste à résoudre le célèbre **problème des $N$ reines**, un classique de l'algorithmique et des jeux d'échecs.

Le défi consiste à placer $N$ reines sur un échiquier de taille $N \times N$ de manière à ce qu'aucune reine ne puisse en attaquer une autre. Deux reines se menacent si elles partagent la même ligne, la même colonne ou la même diagonale.

Le programme prend $N$ en paramètre sur la ligne de commande, résout le problème de manière exhaustive et affiche toutes les configurations valides sous forme de coordonnées $[ligne, colonne]$.

---

## 💡 Algorithme & Concept : Backtracking

L'approche retenue repose sur le **Backtracking** (exploration récursive avec retour sur trace) :

1. On place une reine colonne par colonne (ou ligne par ligne).
2. Pour chaque position candidate, on vérifie si elle est en conflit avec les reines déjà placées (même ligne, même diagonale ascendante ou descendante).
3. Si la position est valide, on avance à la colonne suivante.
4. Si aucune position n'est possible, on revient en arrière (*backtrack*) pour tester la position suivante sur la reine précédente.
5. Une fois que $N$ reines sont placées, la solution est enregistrée et affichée.

---

## 🛠️ Spécifications & Exigences

* **Environnement** : Ubuntu 14.04 LTS | Python 3.4.3
* **Style de code** : Respect strict de la norme **PEP 8** (v1.7.*).
* **Modules autorisés** : Seul le module `sys` est autorisé (`import sys`).
* **Droits d'exécution** : Le fichier doit obligatoirement commencer par `#!/usr/bin/python3` et posséder les permissions d'exécution (`chmod +x`).

### Gestion des Erreurs et Codes de Sortie

Le script vérifie rigoureusement les arguments passés sur la ligne de commande :

| Condition | Message d'erreur | Code de sortie |
| --- | --- | --- |
| Nombre d'arguments $\neq 2$ | `Usage: nqueens N` | `1` |
| $N$ n'est pas un entier | `N must be a number` | `1` |
| $N < 4$ | `N must be at least 4` | `1` |

---

## 📂 Structure du Répertoire

| Fichier | Description |
| --- | --- |
| `0-nqueens.py` | Script Python executable résolvant le problème des $N$ reines. |

---

## ⚙️ Utilisation et Exemples

### 1. Rendre le fichier exécutable

```bash
chmod +x 0-nqueens.py

```

### 2. Exécution classique ($N = 4$)

```bash
./0-nqueens.py 4

```

**Sortie :**

```text
[[0, 1], [1, 3], [2, 0], [3, 2]]
[[0, 2], [1, 0], [2, 3], [3, 1]]

```

### 3. Exécution avec $N = 6$

```bash
./0-nqueens.py 6

```

**Sortie :**

```text
[[0, 1], [1, 3], [2, 5], [3, 0], [4, 2], [5, 4]]
[[0, 2], [1, 5], [2, 1], [3, 4], [4, 0], [5, 3]]
[[0, 3], [1, 0], [2, 4], [3, 1], [4, 5], [5, 2]]
[[0, 4], [1, 2], [2, 0], [3, 5], [4, 3], [5, 1]]

```

### 4. Tests des cas d'erreur

```bash
./0-nqueens.py
# Output: Usage: nqueens N (exit code 1)

./0-nqueens.py ABC
# Output: N must be a number (exit code 1)

./0-nqueens.py 3
# Output: N must be at least 4 (exit code 1)

```

---

## ✍️ Auteur

* **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
