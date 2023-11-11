// pokedex.h

#ifndef POKEDEX_H
#define POKEDEX_H

#include "pokemon.h"

typedef struct {
    Pokemon *pokemons;
    int quantidade;
} Pokedex;

void inicializarPokedex(Pokedex *pokedex);

void adicionarPokemon(Pokedex *pokedex, Pokemon *pokemon);

void listarPokemon(Pokedex *pokedex);

void liberarPokedex(Pokedex *pokedex);

#endif  // POKEDEX_H
