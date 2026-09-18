#!/usr/bin/python3
"""Given an n x n 2D matrix, rotate it 90 degrees clockwise in-place."""
def rotate_2d_matrix(matrix):
    """Rotate a 2D matrix 90 degrees clockwise in-place."""
    n = len(matrix)
    for i in range(n // 2):
        for j in range(i, n - i - 1):
            # Save the top element
            temp = matrix[i][j]
            # Move left element to top
            matrix[i][j] = matrix[n - j - 1][i]
            # Move bottom element to left
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1]
            # Move right element to bottom
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1]
            # Assign temp (top element) to right
            matrix[j][n - i - 1] = temp
