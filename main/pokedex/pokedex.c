// pokedex.c
#include "pokedex.h"
#include <stdlib.h>
#include <stdio.h>

void inicializarPokedex(Pokedex *pokedex) {
    pokedex->pokemons = NULL;
    pokedex->quantidade = 0;
}

void adicionarPokemon(Pokedex *pokedex, Pokemon *pokemon) {
    pokedex->quantidade++;
    pokedex->pokemons = realloc(pokedex->pokemons, sizeof(Pokemon) * pokedex->quantidade);

    if (pokedex->pokemons == NULL) {
        printf("Erro ao alocar memória para a Pokedex.\n");
        exit(EXIT_FAILURE);
    }

    pokedex->pokemons[pokedex->quantidade - 1] = *pokemon;
}

void listarPokemon(Pokedex *pokedex) {
    printf("\n------ Lista de Pokémons na Pokedex ------\n");

    for (int i = 0; i < pokedex->quantidade; i++) {
        printf("Pokemon #%d:\n", i + 1);
        exibirPokemon(&pokedex->pokemons[i]);
        printf("---------------------------\n");
    }
}

void liberarPokedex(Pokedex *pokedex) {
    free(pokedex->pokemons);
    pokedex->pokemons = NULL;
    pokedex->quantidade = 0;
}
