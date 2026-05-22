# Log Parsing

## 📊 Description

Ce projet consiste en la création d'un script d'analyse de données en temps réel (Stream Processing) en Python. Le script est conçu pour lire en continu le flux de données provenant de l'entrée standard (sys.stdin), analyser les lignes de logs HTTP selon un format strict, accumuler des métriques de volume de données (taille des fichiers) et comptabiliser l'occurrence des codes d'état HTTP. Le script intègre un mécanisme asynchrone pour intercepter les interruptions utilisateur (CTRL + C) afin d'afficher les statistiques finales avant de quitter proprement.

## 🎓 Objectifs d'apprentissage

* **Stream Processing** : Savoir lire, filtrer et traiter un flux infini de données ligne par ligne via l'entrée standard.
* **Gestion des Signaux & Interruptions** : Intercepter l'exception KeyboardInterrupt pour exécuter un bloc de code de secours (affichage des métriques) avant l'arrêt du programme.
* **Analyse de chaînes (Parsing)** : Valider et extraire des jetons spécifiques (tokens) dans une chaîne de caractères sans planter face à des données corrompues ou mal formées.
* **Optimisation de la mémoire** : Maintenir des compteurs globaux sans stocker le flux en mémoire pour garantir une empreinte constante ($O(1)$ en espace).

## 🛠️ Spécifications techniques

* **OS** : Ubuntu 14.04 LTS | **Python** : 3.4.3
* **Style** : Respect rigoureux des conventions de style **PEP 8** (version 1.7.x).
* **Entrées/Sorties** : Utilisation exclusive des flux système standard (sys.stdin et sys.stdout).
* **Modularité** : Le code est protégé pour ne pas s'exécuter automatiquement en cas d'importation via un bloc if **name** == '**main**':.

---

## 📂 Liste des Tâches

| # | Tâche | Fichier | Description |
| --- | --- | --- | --- |
| **0** | **Log parsing** | 0-stats.py | Script Python calculant la taille totale et le décompte des codes d'état toutes les 10 lignes ou sur CTRL + C. |

---

## ⚙️ Format de Log Attendu

Chaque ligne reçue sur l'entrée standard doit respecter scrupuleusement la structure suivante sous peine d'être ignorée :

```text
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>

```

### Codes d'état HTTP supervisés

Le script suit et affiche uniquement (par ordre croissant) les codes d'état valides suivants : 200, 301, 400, 401, 403, 404, 405 et 500.

---

## 🛠️ Utilisation et Test

Tu peux tester la robustesse de ton parseur en utilisant le générateur de logs fourni à l'aide d'un pipe (|) :

```bash
# Rendre les scripts exécutables
chmod +x 0-generator.py 0-stats.py

# Lancer la génération et l'analyse de flux en direct
./0-generator.py | ./0-stats.py

```

### Exemple de sortie attendue :

```text
File size: 5213
200: 2
301: 1
403: 2
404: 1
500: 3
File size: 11320
200: 3
301: 2
400: 1
...
^CFile size: 17146
200: 4
301: 3
400: 4
...

```

## ✍️ Auteur

* **Mathieu** - *Étudiant en programmation (42 ans)* - [GitHub Profile](https://www.google.com/search?q=https://github.com/Mathieu7483)
