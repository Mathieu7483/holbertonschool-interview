<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/advanced_binary_search/advanced%20binary%20search.jpg"\>
</p>

# C - Advanced Binary Search

## Description
This project focuses on implementing an **Advanced Binary Search algorithm** in C. Unlike standard binary search algorithms which return any matching index when duplicate values exist, this implementation guarantees finding the **first occurrence** of a searched value in a sorted array using recursion.

The project is part of the **Holberton School** curriculum for low-level programming and algorithm optimization.

## Features & Constraints
- **Recursion**: The algorithm is implemented fully recursively.
- **First Occurrence Guarantee**: Ensures the lowest index is returned if duplicates exist in the array.
- **Array Output**: Prints the array/subarray being searched at each recursive division step.
- **Betty Style**: Strict adherence to the Holberton Betty coding style and documentation guidelines.
- **No standard library functions**: Only `printf` from `<stdio.h>` is allowed.
- **Single Loop Constraint**: Only one loop (e.g., `for` or `while`) is used exclusively to display the current subarray.

## Requirements
- **OS**: Ubuntu 14.04 LTS
- **Compiler**: `gcc 4.8.4` using flags `-Wall -Werror -Wextra -pedantic`
- **Coding Standard**: Betty style (`betty-style.pl` and `betty-doc.pl`)
- **Header File**: All function prototypes are included in `search_algos.h` with standard include guards.

## File Structure

| File | Description |
| --- | --- |
| `search_algos.h` | Header file containing function prototypes and standard macro/library includes. |
| `0-advanced_binary.c` | C implementation of the advanced recursive binary search algorithm. |
| `README.md` | Documentation file explaining the project details and usage. |

## Function Prototype

```c
int advanced_binary(int *array, size_t size, int value);

```

### Parameters

* `array`: Pointer to the first element of the array to search in.
* `size`: Number of elements in `array`.
* `value`: Integer value to search for.

### Return Value

* Index where `value` is located (first occurrence).
* `-1` if `value` is not present in `array` or if `array` is `NULL`.

## Usage & Compilation

To compile and run the project locally with a `main.c` file:

```bash
# Compile using gcc with required flags
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-advanced_binary.c -o 0-advanced_binary

# Run the executable
./0-advanced_binary

```

### Example Output

```text
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

```

## Author

* **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)

