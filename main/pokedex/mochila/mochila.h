// mochila.h
#ifndef MOCHILA_H
#define MOCHILA_H

#include "pokedex.h"

#define TAMANHO_MOCHILA 6

typedef struct {
    int pokemons[TAMANHO_MOCHILA];
    int quantidadeAtual;
} Mochila;

void inicializarMochila(Mochila *mochila);
void adicionarPokemonMochila(Mochila *mochila, int numeroPokemon);
void listarPokemonsPorGeracao(Mochila *mochila, Pokedex *pokedex, int geracao);
void listarPokemonsPorTipo(Mochila *mochila, Pokedex *pokedex, const char *tipo);

#endif // MOCHILA_H
