// colecao.h
#ifndef COLECAO_H
#define COLECAO_H

typedef struct {
    int *capturados;
    int quantidadeCapturados;
} Colecao;

void inicializarColecao(Colecao *colecao);
void cadastrarPokemon(Colecao *colecao, int numeroPokemon);
void listarPokemonColecao(Colecao *colecao);
int pesquisarPokemon(Colecao *colecao, int numeroPokemon);
void alterarPokemon(Colecao *colecao, int numeroAntigo, int numeroNovo);
void excluirPokemon(Colecao *colecao, int numeroPokemon);

#endif // COLECAO_H
