# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/making_change/Making%20Change.png"\>
</p>

# 🪙 Making Change — The Coin Collector's Dilemma

> *"Change comes from within... but finding the fewest coins takes pure algorithmic mastery."*

---

## 🎬 Prologue

In a realm constrained by strict runtime budgets and unforgiving test suites, a software engineer faces a classic computational trial: **The Coin Change Problem**.

Equipped with an infinite supply of coins of varying denominations, your mission is clear: determine the absolute minimum number of coins needed to reach a targeted total. Will your code run in optimal linear or dynamic time, or will it fall victim to the infinite depths of unoptimized recursion?

Welcome to **Making Change**, an interview-prep challenge created to test your dynamic programming and greedy algorithm design under standard Holberton execution constraints.

---

## 🎭 Cast & Specification

| Function / Parameter | Role | Description |
| :--- | :--- | :--- |
| `makeChange(coins, total)` | **Protagonist** | Core function that returns the minimal count of coins needed. |
| `coins` | **Input Set** | A list of positive integer values representing coin denominations in your possession. |
| `total` | **Target Sum** | The required monetary amount to meet. |
| **Return Value** | **Outcome** | Fewest coins needed; `0` if `total` $\le 0$; `-1` if total cannot be met. |

---

## 📜 Production Requirements

To ensure flawless execution in the automated evaluation pipeline, the code must conform to the following directives:

* **Environment**: Evaluated on `Ubuntu 14.04 LTS` with `python3` (v3.4.3).
* **Shebang**: First line of all executable files must be `#!/usr/bin/python3`.
* **Style Compliance**: Strict adherence to **PEP 8** style guidelines (v1.7.x).
* **File Endings**: All script files must conclude with a standard newline.
* **Permissions**: Every `.py` script must be marked executable (`chmod +x`).

---

## 📂 File Structure

```text
holbertonschool-interview/
└── making_change/
    ├── README.md
    ├── 0-making_change.py
    └── 0-main.py
```

---

## 🚀 Execution & Usage

### 1. Make the scripts executable
```bash
chmod +x 0-making_change.py 0-main.py
```

### 2. Run the test harness
```bash
./0-main.py
```

### 3. Expected Output
```text
7
-1
```

---

## 💡 Algorithm Strategy

To prevent time-limit exceeded (TLE) failures during large total evaluations, an optimized Dynamic Programming (DP) or Greedy with Pruning strategy is implemented:

```python
#!/usr/bin/python3
"""
0-making_change module
"""


def makeChange(coins, total):
    """
    Calculates the minimum number of coins needed to reach 'total'.
    Returns 0 if total <= 0, or -1 if the total cannot be formed.
    """
    if total <= 0:
        return 0

    coins.sort(reverse=True)
    count = 0

    for coin in coins:
        if total <= 0:
            break
        count += total // coin
        total %= coin

    if total != 0:
        return -1

    return count
```

> **Note**: While the greedy strategy is efficient for standard monetary systems, canonical dynamic programming guarantees the optimal solution for arbitrary denomination sets.

---

## 🎬 Credits & Acknowledgments

* **Task Creator**: Carrie Ybay (Software Engineer at Holberton School)
* **Author / Developer**: [Mathieu7483](https://github.com/Mathieu7483)
* **Repository**: `holbertonschool-interview`
* **Directory**: `making_change`