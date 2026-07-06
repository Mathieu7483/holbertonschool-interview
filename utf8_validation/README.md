# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/utf8_validation/a-realistic--cinematic-photograph-of-a-software-en.png"\>
</p>

---

# UTF-8 Validation

## 🔣 Description

Ce projet consiste à concevoir un algorithme d'analyse binaire capable de déterminer si un jeu de données représenté par une liste d'entiers est encodé en **UTF-8** valide. L'exercice demande de décoder manuellement les motifs de bits des octets pour identifier la structure des caractères Unicode, qui peuvent s'étendre sur une longueur de 1 à 4 octets. C'est un problème d'optimisation binaire qui requiert l'application de décalages de bits (*bit shifting*) et de masques logiques (`AND`).

## 🎓 Objectifs d'apprentissage & d'entretien

* **Algorithmique Binaire** : Isoler et analyser les bits de poids fort (*Most Significant Bits - MSB*) d'un octet.
* **Norme d'Encodage** : Comprendre en profondeur la spécification de codage UTF-8 (octets de tête et octets de continuation).
* **Gestion des Données Brutes** : Manipuler des entiers en ne conservant que leurs 8 bits inférieurs (gestion des overflows d'octets comme la valeur `256` dans les tests).

## 🛠️ Spécifications techniques

* **OS** : Ubuntu 14.04 LTS
* **Interpréteur** : Python (version 3.4.3)
* **Guide de Style** : Respect rigoureux des règles de la norme **PEP 8** (version 1.7.x).
* **En-tête requis** : La toute première ligne de chaque fichier exécutable doit être exactement :
```python
#!/usr/bin/python3

```



---

## 📂 Structure du Répertoire

| Fichier | Type | Description |
| --- | --- | --- |
| `0-validate_utf8.py` | Script Python | Contient la fonction `validUTF8(data)` réalisant l'analyse binaire. |

---

## 🔬 Les Règles du Codage UTF-8

Pour valider le flux de données, l'algorithme doit inspecter les bits de poids fort de chaque octet selon le schéma officiel :

| Nombre d'octets | Motif Binaire (Premier Octet) | Octets de Continuation |
| --- | --- | --- |
| **1** | `0xxxxxxx` | *Aucun* |
| **2** | `110xxxxx` | `10xxxxxx` (1 octet) |
| **3** | `1110xxxx` | `10xxxxxx` (2 octets) |
| **4** | `11110xxx` | `10xxxxxx` (3 octets) |

* **Octet de tête** : Le nombre de `1` consécutifs au début de l'octet indique le nombre total d'octets composant le caractère.
* **Octets de continuation** : Tout octet suivant un octet de tête doit impérativement commencer par la séquence de bits `10`.

---

## 🛠️ Utilisation et Validation

Le script de test permet de vérifier la conformité du code par rapport à des flux de données valides et invalides :

```bash
chmod +x 0-main.py
./0-main.py

```

### Exemple de sortie :

```text
True
True
False

```

## ✍️ Auteur

* **Mathieu** - *Étudiant en programmation * - [GitHub Profile](https://www.google.com/search?q=https://github.com/Mathieu7483)