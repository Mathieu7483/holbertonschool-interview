#!/usr/bin/python3
"""File that contains calculation of N queens problem."""
import sys


def is_safe(row, col, board):
    """Check if a queen can be placed at (row, col)."""
    for r in range(row):
        c = board[r]
        if c == col or abs(c - col) == abs(r - row):
            return False
    return True


def solve_nqueens(N, row, board, solutions):
    """Recursive function to solve the N queens problem."""
    if row == N:
        solutions.append(board[:])
        return
    for col in range(N):
        if is_safe(row, col, board):
            board[row] = col
            solve_nqueens(N, row + 1, board, solutions)
            board[row] = -1


def print_solution(board):
    """Convert board state into list of [row, col] coordinates."""
    return [[row, col] for row, col in enumerate(board)]


def nqueens(N):
    """Solve the N queens problem and return all solutions."""
    solutions = []
    board = [-1] * N
    solve_nqueens(N, 0, board, solutions)
    return solutions


def main():
    """Parse CLI arguments, validate input, and execute N-queens solver."""
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)
    try:
        N = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)
    if N < 4:
        print("N must be at least 4")
        sys.exit(1)

    solutions = nqueens(N)
    for solution in solutions:
        print(print_solution(solution))


if __name__ == "__main__":
    main()