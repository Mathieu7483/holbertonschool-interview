# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/img/page%20de%20garde%20interview%20Holberton.png"\>
</p>

---
# ⚡ Merge Sort Project

![C Language](https://img.shields.io/badge/Language-C-blue.svg)
![GCC Version](https://img.shields.io/badge/GCC-4.8.4-brightgreen.svg)
![OS](https://img.shields.io/badge/OS-Ubuntu%2014.04%20LTS-orange.svg)
![Betty Style](https://img.shields.io/badge/Style-Betty-purple.svg)

## 📌 Description

This project focuses on implementing the **Top-down Merge Sort** algorithm in C. Merge Sort is an efficient, comparison-based, divide-and-conquer sorting algorithm that divides an array into smaller sub-arrays, sorts them recursively, and then merges the sorted sub-arrays back together.

## 🛠️ General Requirements

* **Environment:** Compiled on Ubuntu 14.04 LTS using `gcc 4.8.4`
* **Flags:** `-Wall -Wextra -Werror -pedantic`
* **Style:** Code follows the **Betty** style guidelines (`betty-style.pl` and `betty-doc.pl`)
* **Constraints:**
  * No global variables.
  * Maximum of 5 functions per file.
  * Allowed functions: `printf`, `malloc`, `free`.
  * `malloc` and `free` must be called **only once** during the execution.
  * Header files must be include guarded.

## 📐 Algorithm Rules & Specifications

* **Sub-array Division Strategy:** When dividing an array into two sub-arrays, the size of the left sub-array must always be less than or equal to the size of the right sub-array.
  $$\text{Example: } \{1, 2, 3, 4, 5\} \longrightarrow \text{Left: } \{1, 2\}, \text{ Right: } \{3, 4, 5\}$$
* **Recursion Sequence:** Sort the left array prior to sorting the right array.

## 📂 File Structure

| File | Description |
| :--- | :--- |
| `sort.h` | Header file containing structure declarations and function prototypes. |
| `0-merge_sort.c` | C implementation of the Top-down Merge Sort algorithm. |
| `0-O` | Text file listing the Big-O time complexity (Best, Average, Worst cases). |
| `print_array.c` | Helper function to print integer arrays. |

## ⏱️ Time & Space Complexity

The time and space complexities for Merge Sort are documented as follows:

| Case | Time Complexity |
| :--- | :--- |
| **Best Case** | $O(n \log n)$ |
| **Average Case** | $O(n \log n)$ |
| **Worst Case** | $O(n \log n)$ |

* **Space Complexity:** $O(n)$ auxiliary space due to temporary buffer allocation.

## 🚀 Compilation & Usage

### 1. Compilation

To compile the program alongside the test file, run:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-merge_sort.c print_array.c -o merge

```

### 2. Execution

Run the compiled executable:

```bash
./merge

```

### 3. Example Output

```text
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Merging...
[left]: 19
[right]: 48
[Done]: 19, 48
Merging...
[left]: 71
[right]: 13
[Done]: 13, 71
Merging...
[left]: 99
[right]: 13, 71
[Done]: 13, 71, 99
Merging...
[left]: 19, 48
[right]: 13, 71, 99
[Done]: 13, 19, 48, 71, 99
Merging...
[left]: 52
[right]: 96
[Done]: 52, 96
Merging...
[left]: 86
[right]: 7
[Done]: 7, 86
Merging...
[left]: 73
[right]: 7, 86
[Done]: 7, 73, 86
Merging...
[left]: 52, 96
[right]: 7, 73, 86
[Done]: 7, 52, 73, 86, 96
Merging...
[left]: 13, 19, 48, 71, 99
[right]: 7, 52, 73, 86, 96
[Done]: 7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99

```

## 👨‍💻 Author

* **Mathieu** - [GitHub Profile](https://www.google.com/search?q=https://github.com/Mathieu7483)

```

---

Souhaitez-vous ajuster certains détails du README, comme ajouter une section relative à d'autres algorithmes de tri ?

```

## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
