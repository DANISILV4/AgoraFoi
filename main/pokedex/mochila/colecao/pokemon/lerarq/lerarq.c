#include<stdio.h>
#include<stdlib.h>


void recebeArquivodados(**dex, int *quantidadePokemon) {
    char linha[500];
    FILE *arq = fopen("dados.csv", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    *quantidadePokemon = 0;

    // Conta quantas linhas existem no arquivo
    while (fgets(linha, sizeof(linha), arq) != NULL) {
        (*quantidadePokemon)++;
    }

    // Volta para o início do arquivo
    rewind(arq);

    // Aloca memória para o vetor de Pokemon
    *dex = (*Pokemon )malloc(sizeof(Pokemon) * (*quantidadePokemon));

    if (*pokedex == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    int i = 0;
    while (i < *quantidadePokemon && fgets(linha, sizeof(linha), arq) != NULL) {
        sscanf(linha, "%d ,%19[^,] ,%9[^,] ,%9[^,] ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%d ,%19[^,] ,%f ,%f ,%d",
               &(*dados)[i].numero, (*dados)[i].nome, (*dados)[i].tipo1, (*dados)[i].tipo2, &(*dados)[i].total,
               &(*dados)[i].vida, &(*dados)[i].ataque, &(*dados)[i].defesa, &(*dados)[i].ataque_especial,
               &(*dados)[i].defesa_especial, &(*dados)[i].velocidade, &(*dados)[i].geracao, &(*dados)[i].lendario,
               (*dados)[i].cor, &(*dados)[i].altura, &(*dados)[i].peso, &(*dados)[i].taxa_captura);

        i++;
    }

    fclose(arq);
}