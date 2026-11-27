# Island Perimeter

Projet d'entretien technique (algorithmique / structures de données en Python) consistant à calculer le périmètre d'une île représentée sous forme de grille rectangulaire.

## Contexte et objectif

- **Dépôt** : `holbertonschool-interview`
- **Répertoire** : `island_perimeter`
- **Auteur de l'énoncé** : Alexa Orrico (Holberton School)
- **Objectif** : Implémenter la fonction `island_perimeter(grid)` retournant le périmètre total d'une île unique (sans lac intérieur) entourée d'eau, où chaque cellule de terre (`1`) a des côtés de longueur `1` exposés à l'eau (`0`) ou aux bords de la grille.

## Contraintes et exigences

- **Environnement** : Ubuntu 14.04 LTS avec `python3` (version `3.4.3`).
- **Éditeurs autorisés** : `vi`, `vim`, `emacs`.
- **Style** : PEP 8 (version `1.7`).
- **Imports interdits** : Aucun module externe ne doit être importé.
- **Documentation** : Les modules et fonctions doivent être documentés (`docstring`).
- **Exécution** : Tous les fichiers doivent être exécutables (`chmod +x`), commencer par `#!/usr/bin/python3` et se terminer par une nouvelle ligne.

## Structure du projet

| Fichier | Description |
| :--- | :--- |
| `0-island_perimeter.py` | Contient la fonction `island_perimeter(grid)` calculant le périmètre de l'île. |
| `0-main.py` | Script de test illustrant l'appel à `island_perimeter(grid)`. |

## Spécifications de `island_perimeter(grid)`

- `grid` est une liste de listes d'entiers :
  - `0` représente l'eau.
  - `1` représente la terre.
- Chaque cellule est un carré de côté `1`.
- Les connexions sont horizontales et verticales uniquement (pas en diagonale).
- La grille est rectangulaire, avec une largeur et une hauteur inférieures ou égales à `100`.
- La grille est entièrement entourée d'eau.
- Il n'y a qu'une seule île (ou aucune) et aucun « lac » (eau entourée de terre non reliée à l'extérieur).

## Utilisation

Rendre les scripts exécutables puis lancer le fichier de test :

```bash
chmod +x 0-island_perimeter.py 0-main.py
./0-main.py
```

---

## ✍️ Auteur

* **Mathieu** - *Holberton School* - [Profil GitHub](https://www.google.com/search?q=https://github.com/Mathieu7483)