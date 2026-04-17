# Minimum Operations

## 📝 Description

Ce projet consiste à résoudre un défi algorithmique classique : calculer le nombre minimum d'opérations nécessaires pour obtenir exactement **n** caractères `H` dans un fichier texte, en partant d'un seul `H`.

Les seules opérations autorisées sont :

1.  **Copy All** (Copier tout)
2.  **Paste** (Coller)

L'objectif est d'optimiser l'utilisation de la mémoire et la vitesse d'exécution en trouvant la logique mathématique sous-jacente au problème.

## 🎓 Logique Algorithmique

Pour atteindre `n` caractères avec le minimum d'opérations, il faut comprendre que le problème revient à trouver la **somme des facteurs premiers** de `n`.

**Exemple pour n = 9 :**

  * Facteurs premiers de 9 : $3 \times 3$
  * Opérations : (Copy + Paste + Paste) + (Copy + Paste + Paste) = **6 opérations**.

**Exemple pour n = 12 :**

  * Facteurs premiers de 12 : $2 \times 2 \times 3$
  * Opérations : $2 + 2 + 3 =$ **7 opérations**.

## 🛠️ Spécifications techniques

  * **Système** : Ubuntu 14.04 LTS.
  * **Langage** : Python 3.4.3.
  * **Style** : Respect strict de la norme **PEP 8** (version 1.7.x).
  * **Éditeurs autorisés** : `vi`, `vim`, `emacs`.

## 📂 Structure du projet

| Fichier | Description |
| :--- | :--- |
| [0-minoperations.py](https://www.google.com/search?q=./0-minoperations.py) | Implémentation de la méthode `minOperations(n)`. |
| [0-main.py](https://www.google.com/search?q=./0-main.py) | Fichier de test fourni pour vérifier l'algorithme. |

## 🚀 Utilisation

### Prototype

```python
def minOperations(n):
    """Calcule le nombre minimum d'opérations"""
```

### Test du code

```bash
$ ./0-main.py
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
```

## ✍️ Auteur

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)