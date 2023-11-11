// pokemon.c
#include "pokemon.h"
#include <stdio.h>

void exibirPokemon(Pokemon *p) {
    printf("Número: %d\n", p->numero);
    printf("Nome: %s\n", p->nome);
    printf("Tipo 1: %s\n", p->tipo1);
    printf("Tipo 2: %s\n", p->tipo2);
    printf("Total: %d\n", p->total);
    printf("Ataque: %d\n", p->ataque);
    printf("Defesa: %d\n", p->defesa);
    printf("Ataque Especial: %d\n", p->ataque_especial);
    printf("Defesa Especial: %d\n", p->defesa_especial);
    printf("Velocidade: %d\n", p->velocidade);
    printf("Geração: %d\n", p->geracao);
    printf("Lendário: %d\n", p->lendario);
    printf("Cor: %s\n", p->cor);
    printf("Altura: %.2f\n", p->altura);
    printf("Peso: %.2f\n", p->peso);
    printf("Taxa de Captura: %d\n", p->taxa_captura);
    printf("Próxima Evolução: %d\n", p->proxima_evolucao);
    printf("Pré-Evolução: %d\n", p->pre_evolucao);
}
