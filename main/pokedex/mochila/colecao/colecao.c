// colecao.c
#include <stdio.h>
#include <stdlib.h>
#include "colecao.h"

void inicializarColecao(Colecao *colecao) {
    colecao->capturados = NULL;
    colecao->quantidadeCapturados = 0;
}

void realocarMemoria(Colecao *colecao, int novoTamanho) {
    colecao->capturados = (int *)realloc(colecao->capturados, novoTamanho * sizeof(int));
    if (colecao->capturados == NULL) {
        printf("Erro ao realocar memória.\n");
        exit(1);
    }
}

void cadastrarPokemon(Colecao *colecao, int numeroPokemon) {
    // Verificar se o Pokemon já está na coleção
    if (pesquisarPokemon(colecao, numeroPokemon) != -1) {
        printf("Pokemon já está na coleção.\n");
        return;
    }

    // Adicionar o novo Pokemon à coleção
    colecao->quantidadeCapturados++;
    realocarMemoria(colecao, colecao->quantidadeCapturados);
    colecao->capturados[colecao->quantidadeCapturados - 1] = numeroPokemon;

    printf("Pokemon adicionado à coleção!\n");
}

void listarPokemonColecao(Colecao *colecao) {
    printf("\n------ Pokemon na Colecao ------\n");
    for (int i = 0; i < colecao->quantidadeCapturados; i++) {
        printf("Numero: %d\n", colecao->capturados[i]);
    }
    printf("--------------------------------\n");
}

int pesquisarPokemon(Colecao *colecao, int numeroPokemon) {
    for (int i = 0; i < colecao->quantidadeCapturados; i++) {
        if (colecao->capturados[i] == numeroPokemon) {
            return i; // Pokemon encontrado, retorna a posição
        }
    }
    return -1; // Pokemon não encontrado
}

void alterarPokemon(Colecao *colecao, int numeroAntigo, int numeroNovo) {
    int posicao = pesquisarPokemon(colecao, numeroAntigo);
    if (posicao != -1) {
        colecao->capturados[posicao] = numeroNovo;
        printf("Pokemon alterado na coleção!\n");
    } else {
        printf("Pokemon não encontrado na coleção.\n");
    }
}

void excluirPokemon(Colecao *colecao, int numeroPokemon) {
    int posicao = pesquisarPokemon(colecao, numeroPokemon);
    if (posicao != -1) {
        // Remover o Pokemon da coleção
        for (int i = posicao; i < colecao->quantidadeCapturados - 1; i++) {
            colecao->capturados[i] = colecao->capturados[i + 1];
        }
        colecao->quantidadeCapturados--;
        realocarMemoria(colecao, colecao->quantidadeCapturados);
        printf("Pokemon removido da coleção!\n");
    } else {
        printf("Pokemon não encontrado na coleção.\n");
    }
}
