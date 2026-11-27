# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/linked_list_palindrome/linked%20list%20palindrome.jpg"\>
</p>


# Linked List Palindrome

![Linked List Palindrome](4e75083a.jpeg)

Projet d'algorithmique et de structures de données en langage C visant à déterminer si une liste simplement chaînée forme un palindrome.

## Contexte et objectif

Ce projet fait partie de la série de préparation aux entretiens techniques de Holberton School (sujet rédigé par Carrie Ybay). L'objectif est d'implémenter en C la fonction `is_palindrome(listint_t **head)` qui vérifie si les valeurs entières d'une liste simplement chaînée se lisent de la même manière de gauche à droite et de droite à gauche (une liste vide étant considérée comme un palindrome).

## Contraintes et exigences

* **Environnement** : Ubuntu 14.04 LTS
* **Compilation** : `gcc 4.8.4` avec les drapeaux `-Wall -Werror -Wextra -pedantic`
* **Éditeurs autorisés** : `vi`, `vim`, `emacs`
* **Style de code** : norme Betty (`betty-style.pl` et `betty-doc.pl`)
* **Variables globales** : interdites
* **Fonctions par fichier** : `5` maximum
* **Fichier d'en-tête** : `lists.h` avec gardes d'inclusion (`#ifndef LISTS_H` / `#define LISTS_H` / `#endif`) et poussé sur le dépôt
* **Mise en forme** : chaque fichier doit se terminer par une nouvelle ligne

## Structure de données

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

```

## Structure du projet

| Fichier | Description |
| --- | --- |
| `lists.h` | Définit `listint_t` et déclare les prototypes des fonctions (`print_listint`, `add_nodeint_end`, `free_listint`, `is_palindrome`). |
| `0-is_palindrome.c` | Implémente `int is_palindrome(listint_t **head)`. |
| `linked_lists.c` | Fonctions utilitaires de manipulation de liste fournies pour les tests. |
| `0-main.c` | Programme de test d'exemple (non requis pour la correction). |

## Spécification

* **Prototype** : `int is_palindrome(listint_t **head);`
* **Paramètre** : `head`, double pointeur vers la tête de la liste simplement chaînée
* **Valeur de retour** :
* `1` si la liste est un palindrome ou si elle est vide
* `0` si la liste n'est pas un palindrome



## Compilation et exécution

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c linked_lists.c 0-is_palindrome.c -o palindrome
./palindrome

```

Sortie attendue avec l'exemple `0-main.c` :

```text
1
17
972
50
98
98
50
972
17
1
Linked list is a palindrome

```

Vérification de la norme Betty :

```bash
betty-style.pl 0-is_palindrome.c lists.h
betty-doc.pl 0-is_palindrome.c lists.h

```



## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
