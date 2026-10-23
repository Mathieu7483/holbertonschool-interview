# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/radix_sort/Radix_sort.jpg"\>
</p>

---

#  radix_sort

> An implementation of the **Radix Sort** algorithm (Least Significant Digit - LSD) in C, developed as part of the Holberton School low-level programming and algorithms curriculum.

---

## 📖 About the Project

The **Radix Sort** project focuses on non-comparative sorting algorithms. Unlike comparison-based sorting algorithms (such as Bubble Sort or Quick Sort) which have a theoretical lower bound of $O(n \log n)$, Radix Sort sorts integer data by grouping keys by individual digits which share the same significant position and value (Least Significant Digit - LSD approach).

---

## ⚙️ Requirements

### General
* Allowed editors: `vi`, `vim`, `emacs`
* Compilation platform: Ubuntu 14.04 LTS using `gcc`
* Compilation flags: `-Wall -Werror -Wextra -pedantic`
* All files must end with a new line
* A `README.md` file at the root of the project folder is mandatory
* Code must follow the **Betty** style guidelines (`betty-style.pl` and `betty-doc.pl`)
* No global variables are allowed
* Maximum of 5 functions per file
* No standard library functions are allowed (except for `malloc`, `free`, and custom `print_array`)

---

## 📂 File Structure

| Filename | Description |
| :--- | :--- |
| `0-radix_sort.c` | Contains the implementation of the LSD Radix Sort algorithm and helper functions. |
| `sort.h` | Header file containing all function prototypes and standard library inclusions. |
| `print_array.c` | Helper function provided by Holberton School to print arrays. |
| `0-main.c` | Example main file used to test the sorting implementation. |

---

## 🚀 Getting Started

### 1. Clone the Repository
```bash
git clone [https://github.com/Mathieu7483/holbertonschool-interview.git](https://github.com/Mathieu7483/holbertonschool-interview.git)
cd holbertonschool-interview/radix_sort

```

### 2. Compilation

Compile all the C files together using `gcc`:

```bash
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-radix_sort.c print_array.c -o radix

```

### 3. Execution

Run the executable:

```bash
./radix

```

---

## 📝 Function Prototypes

| Function | Prototype | Description |
| --- | --- | --- |
| **Radix Sort** | `void radix_sort(int *array, size_t size);` | Sorts an array of integers in ascending order using LSD Radix Sort. |
| **Print Array** | `void print_array(const int *array, size_t size);` | Prints an array of integers. |

---

## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
