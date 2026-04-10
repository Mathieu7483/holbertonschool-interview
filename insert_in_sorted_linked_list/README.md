# Insert in Sorted Linked List

## 📝 Description

Ce projet fait partie de la préparation aux entretiens techniques. L'objectif est d'écrire une fonction en langage C capable d'insérer un nombre dans une liste chaînée simple qui est déjà triée par ordre croissant. La structure de la liste doit rester triée après l'insertion.

## 🎓 Objectifs d'apprentissage

  * Manipulation de listes chaînées simples (*Singly Linked Lists*).
  * Gestion de l'allocation dynamique de mémoire avec `malloc`.
  * Maîtrise des pointeurs et des doubles pointeurs (`**head`).
  * Logique algorithmique d'insertion (gestion du début, du milieu et de la fin de liste).

## 🛠️ Spécifications techniques

  * **Système** : Ubuntu 14.04 LTS.
  * **Compilateur** : `gcc 4.8.4` avec les flags `-Wall -Werror -Wextra -pedantic`.
  * **Style** : Respect strict du style **Betty**.
  * **Contrainte** : Pas de variables globales, maximum 5 fonctions par fichier.

## 📂 Structure du projet

| Fichier | Description |
| :--- | :--- |
| [lists.h](https://www.google.com/search?q=./lists.h) | Fichier d'en-tête contenant la structure `listint_t` et les prototypes. |
| [0-insert\_number.c](https://www.google.com/search?q=./0-insert_number.c) | Implémentation de la fonction `insert_node`. |
| `linked_lists.c` | Fonctions utilitaires (print, add, free) fournies pour les tests. |

## 🚀 Utilisation

### Prototype

```c
listint_t *insert_node(listint_t **head, int number);
```

### Compilation

Pour tester votre fonction avec un fichier `main.c` :

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-insert_number.c -o insert
```

### Exemple

```bash
$ ./insert
0, 1, 2, 3, 4, 98, 402, 1024
-----------------
0, 1, 2, 3, 4, 27, 98, 402, 1024
```

## ✍️ Auteur

  * **Mathieu** - *Étudiant en programmation* - [Mathieu GODALIER](https://github.com/Mathieu7483)

-----
