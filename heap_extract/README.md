<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/heap_extract/Heap%20extract.jpg"\>
</p>

# C - Heap Extract

## Description
This project implements the root extraction operation for a **Max Binary Heap** in C. The objective is to extract the maximum value (the root node), replace it with the last level-order node, and restore the heap property using a **Heapify-Down** algorithm.

This algorithm is a core component of heap operations and priority queues, requiring careful pointer manipulation and binary tree traversals.

---

## Data Structures

The project uses the standard Holberton binary tree structure:

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s heap_t;

```

---

## Requirements

* **OS:** Ubuntu 14.04 LTS
* **Compiler:** `gcc 4.8.4` with flags `-Wall -Werror -Wextra -pedantic`
* **Code Style:** Betty compliant (`betty-style.pl` and `betty-doc.pl`)
* **Global Variables:** Not allowed
* **Functions per File:** Maximum 5
* **Header:** Prototypes included in `binary_trees.h` with include guards

---

## Tasks Summary

| Task | File | Prototype | Description |
| --- | --- | --- | --- |
| **0. Heap - Extract** | `0-heap_extract.c` | `int heap_extract(heap_t **root);` | Extracts the root node of a Max Binary Heap, replaces it with the last level-order node, and rebuilds the heap. |

---

## Algorithm Overview

The `heap_extract` function operates through the following sequence:

1. **Root Value Retrieval:** Extracts the value stored in `*root`.
2. **Find Last Node:** Traverses the heap in **level-order** (using BFS or tree height properties) to identify the last node.
3. **Node Replacement:** Replaces the root's value with the value of the last level-order node.
4. **Cleanup:** Detaches and frees the last node.
5. **Heapify Down (Sift Down):**
* Compares the current node with its children.
* Swaps values with the largest child if the heap property ($parent \ge children$) is violated.
* Repeats recursively or iteratively down the tree until the heap property is restored.


6. **Return:** Returns the extracted root value (or `0` on failure).

---

## Compilation & Usage

To compile the project with a testing `main.c` file:

```bash
gcc -Wall -Wextra -Werror -pedantic -o 0-heap_extract 0-main.c 0-heap_extract.c binary_tree_print.c -L. -lheap

```

### Example Run

```bash
./0-heap_extract

```

### Memory Leak Check

```bash
valgrind ./0-heap_extract

```

---
## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)