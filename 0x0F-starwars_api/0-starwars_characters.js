#!/usr/bin/node
const request = require('request');

// Prints all characters of specified Star Wars movie
request(`https://swapi-api.hbtn.io/api/films/${process.argv[2]}/`,
  async (
    error,
    result,
    body
  ) => {
    if (error) {
      return console.log(error);
    }
    const chars = JSON.parse(body).characters;
    for (const char in chars) {
      const result = await new Promise(
        (resolve, reject) => {
          request(chars[char], (error, result, html) => {
            if (error) {
              reject(error);
            } else {
              resolve(JSON.parse(html).name);
            }
          });
        }
      );
      console.log(result);
    }
  }
);
