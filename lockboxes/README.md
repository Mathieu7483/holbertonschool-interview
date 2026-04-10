# 0. Lockboxes
<p align="center"\>
<img src="https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/img/a-modern-isometric-vector-illustration-representin.png"\>
</p>

## Description
Ce projet contient une méthode permettant de déterminer si toutes les boîtes d'un ensemble de boîtes verrouillées peuvent être ouvertes. Chaque boîte peut contenir des clés permettant d'ouvrir d'autres boîtes.

## Problématique
Vous avez $n$ boîtes verrouillées devant vous. Chaque boîte est numérotée séquentiellement de $0$ à $n - 1$.
- Chaque boîte peut contenir des clés pour d'autres boîtes.
- Une clé avec le même numéro qu'une boîte ouvre cette boîte.
- La première boîte (`boxes[0]`) est **déverrouillée** par défaut.
- Le but est d'écrire une fonction qui retourne `True` si toutes les boîtes peuvent être ouvertes, sinon `False`.

## Prototype
```python
def canUnlockAll(boxes)
```

## ✍️ Auteur

  * **Mathieu** - *Étudiant en programmation, spécialisation Machine Learning* - [👤 Mathieu GODALIER](https://github.com/Mathieu7483)