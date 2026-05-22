# Linked List Cycle

## 🔗 Description

Ce projet fait partie de la série de préparation aux entretiens techniques. L'objectif est de concevoir et d'implémenter un algorithme en C capable de détecter si une liste simplement chaînée contient un cycle (une boucle infinie où un nœud pointe vers un élément précédent de la liste). Face aux contraintes strictes d'évaluation, la solution doit s'exécuter de manière hautement efficace, sans aucune allocation de mémoire supplémentaire.

## 🎓 Objectifs d'apprentissage

* **Algorithme des deux pointeurs** : Comprendre et appliquer l'algorithme de détection de cycle de Floyd (connu sous le nom d'algorithme du lièvre et de la tortue).
* **Optimisation des ressources** : Atteindre une complexité spatiale de $O(1)$ en évitant l'usage de tables de hachage ou de tableaux dynamiques (malloc).
* **Robustesse du code C** : Gérer rigoureusement les cas limites (listes vides, listes à un seul élément, pointeurs NULL).

## 🛠️ Spécifications techniques

* **OS / Compilateur** : Ubuntu 14.04 LTS | gcc 4.8.4
* **Drapeaux de compilation** : -Wall -Werror -Wextra -pedantic
* **Style** : Respect strict du style **Betty** (vérifié par betty-style.pl et betty-doc.pl).
* **Contraintes** : Pas de variables globales, maximum 5 fonctions par fichier, inclusion obligatoire de gardes de préprocesseur (*include guards*) dans le fichier d'en-tête.

---

## 📂 Structure du Répertoire

| Fichier | Rôle | Description |
| --- | --- | --- |
| lists.h | En-tête | Contient la définition de la structure listint_t et les prototypes des fonctions. |
| 0-check_cycle.c | Source | Implémentation de la fonction principale de détection de cycle. |

---

## 🔬 Focus Algorithmique : Le Lièvre et la Tortue

Pour résoudre ce problème avec une complexité spatiale de $O(1)$, on utilise l'algorithme de détection de cycle de **Floyd** :

1. On initialise deux pointeurs au début de la liste : la **tortue** (*slow*) et le **lièvre** (*fast*).
2. À chaque itération, la tortue avance d'un nœud (slow = slow->next) tandis que le lièvre avance de deux nœuds (fast = fast->next->next).
3. Si la liste n'a pas de cycle, le lièvre atteindra rapidement la fin (NULL).
4. Si la liste contient un cycle, le lièvre finira par rattraper et croiser la tortue (slow == fast).

---

## 🛠️ Compilation et Validation

Un script de test 0-main.c ainsi que les utilitaires de gestion de liste 0-linked_lists.c sont fournis à titre d'exemple pour valider le comportement.

### Commande de compilation :

```bash
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-check_cycle.c 0-linked_lists.c -o cycle

```

### Exemple d'exécution :

```bash
$ ./cycle
1024
402
98
4
3
2
1
0
Linked list has no cycle
Linked list has a cycle

```

## ✍️ Auteur

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)