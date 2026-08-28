<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/heap_sort/heap_sort%201.jpg"\>
</p>

# C - Heap Sort

## Description
This project implements the **Heap Sort** algorithm in C as part of the Holberton School curriculum. The objective is to understand the concepts of binary heaps, tree-to-array representations, and the sift-down approach to sorting arrays efficiently in $O(n \log n)$ time.

The implementation strictly adheres to the **Betty** style guide and complies with Holberton School constraints (no global variables, strict flag requirements, standard library limitations, and custom printing output after every element swap).

---

## Technical Specifications & Requirements

* **Language:** C
* **OS / Compiler:** Ubuntu 14.04 LTS compiled with `gcc 4.8.4`
* **Compilation Flags:** `-Wall -Werror -Wextra -pedantic`
* **Style Guide:** Betty (`betty-style.pl` and `betty-doc.pl`)
* **Standard Library:** Forbidden (functions like `printf` or `puts` are prohibited except where explicitly permitted for testing).
* **Include Guard:** All `.h` files must be guarded against double inclusion.

---

## Data Structures & Prototypes

All prototypes are defined in `sort.h`:

```c
#ifndef SORT_H
#ifndef SORT_H
#define SORT_H

#include <stddef.h>

void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);

#endif /* SORT_H */

```

---

## Files Overview

| File | Description |
| --- | --- |
| `sort.h` | Header file containing all function prototypes and standard library includes. |
| `print_array.c` | Provided function to print an array of integers separated by commas. |
| `0-heap_sort.c` | Implementation of the sift-down Heap Sort algorithm. |
| `0-O` | Text file containing the Big O time complexity notations for Heap Sort. |

---

## Complexity Analysis (`0-O`)

The time complexity of the Heap Sort algorithm using sift-down is as follows:

| Case | Time Complexity |
| --- | --- |
| **Best Case** | $O(n \log n)$ |
| **Average Case** | $O(n \log n)$ |
| **Worst Case** | $O(n \log n)$ |
| **Space Complexity** | $O(1)$ *(In-place sorting)* |

---

## Usage & Compilation

To compile and run the project locally with `0-main.c`:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-heap_sort.c print_array.c -o 0-heap
./0-heap

```

---

## Author

* **Mathieu** - [Mathieu7483](https://www.google.com/search?q=https://github.com/Mathieu7483)

