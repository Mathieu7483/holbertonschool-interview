<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/rotate_2d_matrix/Rotate%202D%20matrix.jpg"\>
</p>

# Rotate 2D Matrix

## Description
This project contains an algorithm written in Python 3 that rotates an $n \times n$ 2D matrix 90 degrees clockwise **in-place**.

The operation modifies the matrix directly in memory without allocating additional 2D data structures, ensuring optimal spatial complexity $O(1)$.

## Requirements

### General
* **Allowed editors:** `vi`, `vim`, `emacs`
* **OS / Environment:** Interpreted on **Ubuntu 14.04 LTS** using `python3` (version 3.4.3)
* **Coding Style:** Code must strictly adhere to **PEP 8** style (version 1.7.x)
* **Standard:**
  * All files must end with a new line.
  * The first line of all files must be exactly `#!/usr/bin/python3`.
  * All modules and functions must be documented (`docstrings`).
  * All script files must be executable (`chmod +x`).
  * No external modules or standard library imports are allowed.

## Repository Structure

| File | Description |
| :--- | :--- |
| `README.md` | Documentation file for the project |
| `0-rotate_2d_matrix.py` | Python script containing the `rotate_2d_matrix(matrix)` function |

## Function Prototype

```python
def rotate_2d_matrix(matrix):
    """
    Rotates an n x n 2D matrix 90 degrees clockwise in-place.
    
    Args:
        matrix (list of list of int/floats): The n x n matrix to rotate.

    Returns:
        None. The matrix is modified in-place.
    """

```

## Algorithm Strategy

The rotation is achieved in two steps:

1. **Transpose the matrix**: Swap elements across the main diagonal (`matrix[i][j]` with `matrix[j][i]`).
2. **Reverse each row**: Reverse the elements of every row in-place using `matrix[i].reverse()`.

This method guarantees a time complexity of $O(n^2)$ and an auxiliary space complexity of $O(1)$.

## Usage & Testing

1. Clone this repository and navigate to the project directory:
```bash
git clone [https://github.com/Mathieu7483/holbertonschool-interview.git](https://github.com/Mathieu7483/holbertonschool-interview.git)
cd rotate_2d_matrix

```


2. Make sure the file is executable:
```bash
chmod +x 0-rotate_2d_matrix.py

```


3. Create a test main file `main_0.py`:
```python
#!/usr/bin/python3
"""
Test - Rotate 2D Matrix
"""
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)

```


4. Execute the test:
```bash
./main_0.py

```



**Expected Output:**

```text
[[7, 4, 1],
[8, 5, 2],
[9, 6, 3]]

```

## Author

* **Mathieu** - [Mathieu7483](https://www.google.com/search?q=https://github.com/Mathieu7483&utm_source=gemini)
