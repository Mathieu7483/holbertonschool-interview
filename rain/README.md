
# Rain - Trapping Rain Water Algorithm

![Python 3.4.3](https://img.shields.io/badge/python-3.4.3-blue.svg)
![PEP8](https://img.shields.io/badge/style-PEP8%201.7.x-green.svg)
![Ubuntu](https://img.shields.io/badge/ubuntu-14.04%20LTS-orange.svg)

## 📝 Description

Le projet **Rain** aborde le problème classique d'entretien technique connu sous le nom de **Trapping Rain Water** (rétention d'eau de pluie). 

L'objectif est de calculer la quantité d'eau de pluie qui reste piégée entre une série de murs représentés par une liste d'entiers non négatifs. Chaque élément de la liste correspond à un mur d'une largeur égale à `1`.

---

## 📐 Représentation Visuelle

Prenons la liste suivante de hauteurs de murs : `[0, 1, 0, 2, 0, 3, 0, 4]`

```text
  4 |                      ██
  3 |          ██  ~~  ██
  2 |      ██  ~~  ██  ~~  ██
  1 |  ██  ~~  ██  ~~  ██  ~~  ██
----+--------------------------
Idx | 0  1  2  3  4  5  6  7

```

* Les cases indiquées par `~~` représentent les unités d'eau retenues.
* **Résultat attendu :** `6` unités carrées d'eau.

---

## ⚙️ Exigences & Contraintes

* **Éditeurs autorisés :** `vi`, `vim`, `emacs`
* **Système d'exploitation :** Ubuntu 14.04 LTS avec `python3` (v3.4.3)
* **Style de code :** Conformité stricte avec **PEP 8** (v1.7.x)
* **Imports :** ❌ Aucun module ou bibliothèque externe n'est autorisé.
* **Documentation :** Tous les modules et fonctions doivent disposer d'une `docstring` explicite.
* **Exécutabilité :** Tous les scripts Python doivent être rendus exécutables (`chmod +x`).
* **Fin de fichier :** Chaque fichier doit se terminer par une nouvelle ligne.
* **Shebang :** La première ligne de chaque fichier doit être exactement `#!/usr/bin/python3`.

---

## 📁 Structure du Projet

```text
holbertonschool-interview/
└── rain/
    ├── README.md
    ├── 0-rain.py
    └── 0_main.py

```

---

## 🚀 Utilisation

### Prototype de la fonction

```python
def rain(walls):
    """
    Calcule le volume total d'eau retenu après la pluie.

    Args:
        walls (list): Liste d'entiers non négatifs représentant la hauteur des murs.

    Returns:
        int: Quantité totale d'eau de pluie retenue.
    """

```

### Exemple de test (`0_main.py`)

```python
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))  # Output: 6

    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))  # Output: 6

```

### Exécution

```bash
$chmod +x 0-rain.py 0_main.py$ ./0_main.py
6
6

```

---

## 👤 Auteur

**Mathieu** — *Élève à Holberton School (Machine Learning)*

* GitHub: [@Mathieu7483](https://www.google.com/search?q=https://github.com/Mathieu7483)
* Projet conçu par **Jesse Hedden**, Software Engineer at Holberton School.

```

```