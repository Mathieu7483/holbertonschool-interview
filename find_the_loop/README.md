# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/find_the_loop/Find%20the%20loop.png"\>
</p>

# Find the Loop

## Description
Ce projet en langage C s'inscrit dans le cadre du cursus de la **Holberton School**. Il a pour objectif de résoudre un problème algorithmique classique : la détection et la localisation d'un cycle (boucle) au sein d'une liste chaînée simple, en respectant des contraintes de performance et de mémoire très strictes.

## Technical 
- **Interdictions :** Utilisation de `malloc`, `free`, de tableaux ou de variables globales interdite.
- **Limitation des variables :** Maximum de **deux variables** déclarées au sein de la fonction principale de recherche.
- **Style de code :** Respect rigoureux des normes **Betty** (`betty-style.pl` et `betty-doc.pl`).
- **Compilation :** Les fichiers sont compilés sous Ubuntu 14.04 LTS avec `gcc` en utilisant les options `-Wall -Werror -Wextra -pedantic`.

## Prototype
```c
listint_t *find_listint_loop(listint_t *head);

```

* **Paramètre :** `head` — Pointeur vers le premier nœud de la liste chaînée.
* **Valeur de retour :** L'adresse du nœud où la boucle commence, ou `NULL` s'il n'y a pas de boucle.

## Algorithm

L'algorithme utilise la méthode des deux pointeurs de Floyd :

1. **Phase de détection :** Deux pointeurs (`slow` et `fast`) parcourent la liste à des vitesses différentes (`+1` pas pour `slow`, `+2` pas pour `fast`). S'ils se rencontrent, un cycle est confirmé.
2. **Phase de localisation :** Une fois la collision détectée, l'un des pointeurs est replacé au début de la liste (`head`). Les deux avancent ensuite au même rythme (`+1` pas) ; le point de leur prochaine intersection correspond exactement au début de la boucle.

## Included Files

| Fichier | Description |
| --- | --- |
| `0-find_loop.c` | Contient la fonction `find_listint_loop`. |
| `lists.h` | Fichier d'en-tête contenant la structure de la liste et les prototypes. |

## Utilisation and Test

Vous pouvez tester le code à l'aide d'un fichier `main.c` et de la bibliothèque ou du fichier source fournis par l'école :

```bash
gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-find_loop.c lib.c -o main
./main

```

## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
