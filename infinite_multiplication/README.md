<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/infinite_multiplication/Infinite%20Multiplication.jpg"\>
</p>


# Infinite Multiplication

A C program designed to multiply two positive numbers of arbitrary, infinite size passed via command-line arguments.

This project focuses on low-level string manipulation, manual memory management, and implementing primary school arithmetic (long multiplication) in standard C without relying on external mathematical libraries or high-level built-ins.

---

## Technical Constraints & Requirements

- **Language:** C (Standard C90 / C99 compliant)
- **OS Environment:** Ubuntu 14.04 LTS (or higher)
- **Compiler:** `gcc 4.8.4` with flags `-Wall -Werror -Wextra -pedantic`
- **Coding Style:** [Betty Style](https://github.com/holbertonschool/Betty)
- **Authorized Functions:** `malloc`, `free`, `exit`, and `_putchar`
- **Forbidden Functions:** `printf`, `puts`, `calloc`, `realloc`, `strlen`, `atoi`, etc.
- **Global Variables:** Prohibited

---

## How It Works

1. **Validation:** Checks that exactly two arguments are provided and verifies that both consist exclusively of digits (`0-9`). On error, prints `Error\n` and exits with status code `98`.
2. **Edge Cases:** Handles multiplications involving `0` directly to optimize performance and prevent leading zero artifacts.
3. **Primary Multiplication Logic:**
   - Allocates an array large enough to store the final result (at most `len(num1) + len(num2)` digits).
   - Iterates backwards through both input strings, computing positional products and maintaining carry values.
   - Converts the integer result array into printable ASCII characters.
4. **Output & Cleanup:** Outputs the result using `_putchar`, handles proper memory deallocation (`free`), and terminates cleanly with exit code `0`.

---

## File Structure

```text
infinite_multiplication/
├── holberton.h    # Header file containing function prototypes and includes
└── 0-mul.c        # Main implementation of the infinite multiplication logic

```

---

## Compilation & Usage

### 1. Compilation

Compile the project using `gcc` alongside your custom `_putchar.c` file:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-mul.c _putchar.c -o mul

```

### 2. Execution Examples

#### Basic Operations

```bash
$ ./mul 10 98980
989800

$ ./mul 2 5
10

```

#### Large Numbers (Infinite Precision)

```bash
$ ./mul 235234693269436436223446526546 286580343650843650834260831096
67413639235755891879970464524226159074760914989935413350556

```

#### Validation & Error Handling

```bash
$ ./mul
Error
$echo$?
98

$ ./mul 12abc 45
Error
$echo$?
98

```

---

## ✍️ Author

  * **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)
