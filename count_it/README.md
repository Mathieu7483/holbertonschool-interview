<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/count_it/Count%20it.jpg"\>
</p>

# Reddit API - Count it!

## Description

This project is part of the **Holberton School** curriculum. The main objective is to practice recursive function calls in Python by querying the Reddit API to parse titles of hot articles for a given subreddit and tracking keyword occurrences.

The task requires strict adherence to recursion principles (no main execution loops for pagination), proper HTTP request handling without automatic redirect following, precise word isolation/matching, and custom sorting logic.

---

## Requirements

### General
* **Allowed editors:** `vi`, `vim`, `emacs`
* **OS / Environment:** Executed on Ubuntu 14.04 LTS using `python3` (version 3.4.3)
* **File specifications:**
  * All files must end with a new line.
  * The first line of all files must be exactly `#!/usr/bin/python3`.
  * All files must be executable (`chmod +x <filename>`).
* **Code Style:** PEP 8 standard (`pep8` / `pycodestyle`).
* **Modules & Documentation:**
  * Libraries imported must be organized in alphabetical order.
  * All modules must have proper documentation (`python3 -c 'print(__import__("0-count").__doc__)'`).
  * Must use the `requests` module for sending HTTP requests.
* **Constraints:**
  * Must not follow redirects (`allow_redirects=False`) to avoid false positives on invalid subreddits.
  * Must use recursion to handle API pagination (`after` token) instead of loops.

---

## Usage & Prototype

### Prototype
```python
def count_words(subreddit, word_list, instances={}, after="", count=0)

```

### Parameters

* `subreddit` (*str*): The name of the target subreddit.
* `word_list` (*list of str*): List of keywords to search and count.
* `instances` (*dict*, optional): Internal accumulator tracking counts per word.
* `after` (*str*, optional): The pagination token for the next page of results.
* `count` (*int*, optional): Total items fetched across recursive calls.

### Behavior & Parsing Rules

* Keywords are processed **case-insensitively**.
* Words inside post titles must match exactly (delimited by spaces). Punctuation attached to words (e.g., `java.`, `java!`, `java_`) invalidates the match.
* Duplicate keywords in `word_list` accumulate their totals into a single entry.
* Prints results in **descending order by count**. Ties in counts are sorted **alphabetically (ascending, A-Z)**.
* Words with `0` matches are omitted from output.
* Prints nothing if the subreddit is invalid or returns no posts.

---

## Repository Structure

```text
holbertonschool-interview/
└── count_it/
    ├── README.md
    ├── 0-count.py
    └── 0-main.py

```

---

## Installation & Execution

1. Clone the repository:
```bash
git clone [https://github.com/Mathieu7483/holbertonschool-interview.git](https://github.com/Mathieu7483/holbertonschool-interview.git)
cd holbertonschool-interview/count_it

```


2. Make sure the script is executable:
```bash
chmod +x 0-count.py

```


3. Test the function using the entry point script:
```bash
python3 0-main.py programming 'react python java javascript scala no_results_for_this_one'

```



---

## Example Output

```bash
$ python3 0-main.py programming 'react python java javascript scala no_results_for_this_one'
java: 27
javascript: 20
python: 17
react: 17
scala: 4

$ python3 0-main.py programming 'JavA java'
java: 54

$python3 0-main.py not_a_valid_subreddit 'python java'$ 

```

---

## Author

* **Mathieu** - *Programming student, specialization Machine Learning* - [👤 My Github profile](https://github.com/Mathieu7483)