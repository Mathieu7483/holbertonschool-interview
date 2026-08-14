# Holberton School Interview Preparation
<p align="center"\>
<img src="https://github.com/Mathieu7483/holbertonschool-interview/blob/main/starwars_api/Starwars%20API.png"\>
</p>

```markdown
# Star Wars API - Character Fetcher

## Description
This project consists of a Node.js script that interacts with the [SWAPI (Star Wars API)](https://swapi-api.hbtn.io/) to retrieve and display characters from a specific Star Wars movie. The characters are printed in the exact order as listed in the API's `/films/` endpoint.

This project was developed as part of the curriculum at **Holberton School** to practice asynchronous request handling, API integration, and JavaScript closure management in Node.js.

## Requirements
* **Environment:** Ubuntu 14.04 LTS
* **Node version:** 10.14.x
* **Linter:** `semistandard` (Standard JS style + mandatory semicolons)
* **Code style:** AirBnB compliance guidelines
* **Execution:** All scripts must be executable and start with `#!/usr/bin/node`

## Installation

1. **Install Node.js 10:**
   ```bash
   curl -sL [https://deb.nodesource.com/setup_10.x](https://deb.nodesource.com/setup_10.x) | sudo -E bash -
   sudo apt-get install -y nodejs

```

2. **Install `semistandard`:**
```bash
sudo npm install semistandard --global

```


3. **Install the `request` module:**
```bash
sudo npm install request --global
export NODE_PATH=/usr/lib/node_modules

```



## Repository Structure

```text
holbertonschool-interview/
└── starwars_api/
    └── 0-starwars_characters.js

```

## Tasks

### 0. Star Wars Characters

* **File:** `0-starwars_characters.js`
* **Usage:** `./0-starwars_characters.js <Movie_ID>`
* **Description:** Fetches and displays all character names for a given Star Wars movie ID, preserving the order defined by the API response.

#### Example:

```bash
$ ./0-starwars_characters.js 3
Luke Skywalker
C-3PO
R2-D2
Darth Vader
Leia Organa
Obi-Wan Kenobi
Chewbacca
Han Solo
Jabba Desilijic Tiure
Wedge Antilles
Yoda
Palpatine
Boba Fett
Lando Calrissian
Ackbar
Mon Mothma
Arvel Crynyd
Wicket Systri Warrick
Nien Nunb
Bib Fortuna

```

## Author

* **Alexa Orrico** — *Project Creator for Holberton School*
* **Mathieu** ([Mathieu7483](https://www.google.com/search?q=https://github.com/Mathieu7483)) — *Implementation*

```

Tu n'as plus qu'à coller ce contenu dans un fichier `README.md` placé dans le répertoire `starwars_api/`. N'oublie pas de vérifier la conformité avec `semistandard 0-starwars_characters.js` et les permissions d'exécution (`chmod +x 0-starwars_characters.js`).

```