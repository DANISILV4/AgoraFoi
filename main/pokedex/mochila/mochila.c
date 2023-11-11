// mochila.c
#include <stdio.h>
#include "mochila.h"

void inicializarMochila(Mochila *mochila) {
    mochila->quantidadeAtual = 0;
}

void adicionarPokemonMochila(Mochila *mochila, int numeroPokemon) {
    if (mochila->quantidadeAtual < TAMANHO_MOCHILA) {
        mochila->pokemons[mochila->quantidadeAtual] = numeroPokemon;
        mochila->quantidadeAtual++;
        printf("Pokemon adicionado à mochila!\n");
    } else {
        printf("A mochila está cheia. Libere espaço antes de adicionar mais Pokémons.\n");
    }
}

void listarPokemonsPorGeracao(Mochila *mochila, Pokedex *pokedex, int geracao) {
    printf("\n------ Pokemon na Mochila (Geração %d) ------\n", geracao);
    for (int i = 0; i < mochila->quantidadeAtual; i++) {
        int numeroPokemon = mochila->pokemons[i];
        if (pokedex[numeroPokemon - 1].geracao == geracao) {
            printf("Numero: %d, Nome: %s\n", numeroPokemon, pokedex[numeroPokemon - 1].nome);
        }
    }
    printf("--------------------------------------------\n");
}

void listarPokemonsPorTipo(Mochila *mochila, Pokedex *pokedex, const char *tipo) {
    printf("\n------ Pokemon na Mochila (Tipo %s) ------\n", tipo);
    for (int i = 0; i < mochila->quantidadeAtual; i++) {
        int numeroPokemon = mochila->pokemons[i];
        if (strcmp(pokedex[numeroPokemon - 1].tipo1, tipo) == 0 ||
            strcmp(pokedex[numeroPokemon - 1].tipo2, tipo) == 0) {
            printf("Numero: %d, Nome: %s\n", numeroPokemon, pokedex[numeroPokemon - 1].nome);
        }
    }
    printf("--------------------------------------------\n");
}
