#!/usr/bin/node

const request = require('request');
const movieId = process.argv[2];
const url = `https://swapi-api.hbtn.io/api/films/${movieId}/`;

// 1. Requête pour récupérer les données du film
request(url, (error, response, body) => {
  if (error) {
    console.error(error);
    return;
  }

  // Extraction de la liste des URLs de tous les personnages
  const characters = JSON.parse(body).characters;

  // 2. Fonction récursive pour traiter la liste dans l'ordre strict
  const printCharacter = (index) => {
    // Condition d'arrêt : on a parcouru tous les personnages
    if (index === characters.length) {
      return;
    }

    // Requête HTTP pour chaque personnage
    request(characters[index], (err, res, charBody) => {
      if (err) {
        console.error(err);
        return;
      }

      // Affichage du nom
      console.log(JSON.parse(charBody).name);

      // Appel du personnage suivant une fois la réponse reçue
      printCharacter(index + 1);
    });
  };

  // Lancement du traitement avec le premier personnage (index 0)
  printCharacter(0);
});
