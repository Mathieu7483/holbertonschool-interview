# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/double_circular_linked_list/Double%20linked%20list.png"\>
</p>

# 🔄 Double Circular Linked List

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="Language C">
  <img src="https://img.shields.io/badge/Style-Betty-green.svg" alt="Betty Style">
  <img src="https://img.shields.io/badge/School-Holberton-orange.svg" alt="Holberton School">
  <img src="https://img.shields.io/badge/Status-Completed-success.svg" alt="Status">
</p>

---

## 📖 About The Project

This project is part of the **Holberton School** curriculum. It focuses on implementing data structures in C, specifically a **Double Circular Linked List**. 

A doubly linked list allows traversal in both directions (forward and backward), and the circular nature means that the tail's `next` pointer points back to the head, and the head's `prev` pointer points back to the tail, eliminating `NULL` terminations in normal flow.

---

## 🛠️ Data Structure

The project uses the following node structure defined in `list.h`:

```c
/**
 * struct List - doubly linked list
 * @str: string - (malloc'ed string)
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct List
{
    char *str;
    struct List *prev;
    struct List *next;
} List;

```

---

## 📁 Files & Functions

| File | Prototype | Description |
| --- | --- | --- |
| `0-add_node.c` | `List *add_node_end(List **list, char *str);` | Adds a new node to the **end** of the list. |
| `0-add_node.c` | `List *add_node_begin(List **list, char *str);` | Adds a new node to the **beginning** of the list. |
| `list.h` | - | Header file containing structures and prototypes. |

---

## ⚙️ Requirements & Compilation

* **Compilers:** `gcc` (version 4.8.4 on Ubuntu 14.04 LTS)
* **Flags:** `-Wall`, `-Werror`, `-Wextra`, `-pedantic`
* **Style Guidelines:** [Betty Style](https://www.google.com/search?q=https://github.com/holbertonschool/Betty) (`betty-style.pl` & `betty-doc.pl`)
* **Authorized functions:** `malloc`, `free`, `strdup`

### Compilation Example

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-add_node.c -o a.out

```

---

## 🚀 Usage

Example of how to use the functions in your `main.c`:

```c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void)
{
    List *list = NULL;

    add_node_end(&list, "Holberton");
    add_node_end(&list, "School");

    return (0);
}

```

---

## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
