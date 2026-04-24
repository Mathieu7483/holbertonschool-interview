#!/usr/bin/python3
"""Method that calculates the fewest number of operations needed
to result in exactly n H characters in the file.
Be smart about how you utilize the memory!
-Prototype: def minOperations(n)
-Returns an integer
-If n is impossible to achieve, return 0"""


def minOperations(n):
    """Calculates the fewest number of operations needed
    to result in exactly n H characters in the file.
    """
    if n < 2:
        return 0

    operations = 0
    current_length = 1
    memory = 0

    while current_length < n:
        if n % current_length == 0:
            memory = current_length
            operations += 1  # Copy All
            current_length += memory
            operations += 1  # Paste
        else:
            current_length += memory
            operations += 1  # Paste

    return operations
