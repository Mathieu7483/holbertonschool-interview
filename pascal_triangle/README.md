# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/pascal_triangle/triangle%20de%20pascal.jpg"\>
</p>

# Pascal's Triangle

Projet d'algorithmique en Python consistant à générer les `n` premières lignes du triangle de Pascal sous forme d'une liste de listes d'entiers.

## Contexte et objectif

- **Dépôt** : `holbertonschool-interview`
- **Répertoire** : `pascal_triangle`
- **Auteur de l'énoncé** : Alexa Orrico (Holberton School)
- **Objectif** : Implémenter la fonction `pascal_triangle(n)` retournant une liste de listes d'entiers représentant les `n` lignes du triangle de Pascal, ou une liste vide si `n` est inférieur ou égal à `0`.

## Structure du projet

| Fichier | Description |
| :--- | :--- |
| `0-pascal_triangle.py` | Contient la fonction `pascal_triangle(n)` générant le triangle de Pascal. |
| `0-main.py` | Script de test illustrant l'affichage du triangle de Pascal pour `n = 5`. |

## Spécification de `pascal_triangle(n)`

- **Entrée** : `n`, un entier (supposé toujours être un entier).
- **Comportement** :
  - Retourne `[]` si `n <= 0`.
  - Chaque ligne `i` (indexée à partir de `0` jusqu'à `n - 1`) commence et se termine par `1`.
  - Chaque élément intérieur à l'indice `j` d'une ligne `i` (`i >= 2`, `1 <= j < i`) vaut la somme des deux éléments situés au-dessus de lui dans la ligne précédente : `triangle[i - 1][j - 1] + triangle[i - 1][j]`.

## Utilisation

Exemple d'exécution avec le script `0-main.py` :

```python
#!/usr/bin/python3
"""
0-main
"""
pascal_triangle = __import__('0-pascal_triangle').pascal_triangle

def print_triangle(triangle):
    """
    Print the triangle
    """
    for row in triangle:
        print("[{}]".format(",".join([str(x) for x in row])))

if __name__ == "__main__":
    print_triangle(pascal_triangle(5))

```

Commande et sortie attendue :

```bash
./0-main.py

```

```text
[1]
[1,1]
[1,2,1]
[1,3,3,1]
[1,4,6,4,1]

```

## Approche algorithmique

* **Construction ligne par ligne** : Pour chaque ligne de `0` à `n - 1`, initialiser une ligne de longueur `i + 1` remplie de `1`, puis calculer les valeurs intermédiaires à partir de la ligne précédente.
* **Complexité temporelle** : $O(n^2)$ (le nombre total d'éléments générés est $\frac{n(n+1)}{2}$).
* **Complexité spatiale** : $O(n^2)$ pour stocker l'ensemble des lignes du triangle.

---

## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)

