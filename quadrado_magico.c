/*Programa que verifica se uma matriz pode ser considerada um quadrado mágico.
Para ser um quadrado magico, a soma dos elementos de uma linha devem ser iguais a
soma dos elementos de uma coluna e igual a soma das diagonais.

Autor: João Rissi(2023)                                                             */

// Bibliotecas utilizadas
#include<stdio.h>
#include<stdlib.h>

// Prototipos das funcoes
void preenche_matriz(int **matriz, int linhas, int colunas);
void verifica_quadrado(int **matriz, int linhas, int colunas);

// Inicio da main
int main(){
    int n, **matriz;
    scanf("%d", &n);
    matriz=(int**)malloc(sizeof(int*)*n);
    for (int i=0; i<n; i++){
        matriz[i]=(int*)malloc(sizeof(int)*n);
    }
    preenche_matriz(matriz, n, n);
    verifica_quadrado(matriz, n, n);
    for (int i=0; i<n; i++){
        free(matriz[i]);
        matriz[i]=NULL;
    }
    free(matriz);
    matriz = NULL;
    return 0;
}

// Funcao que preenche os termos da matriz
void preenche_matriz(int **matriz, int linhas, int colunas){
    for (int i=0; i<linhas; i++){
        for (int j=0; j<colunas; j++){
            scanf(" %d", &matriz[i][j]);
        }
    }
}

// Verifica se cumpre os requisitos do enunciado
void verifica_quadrado(int **matriz, int linhas, int colunas){
    int soma=0;
    // Soma da diagonal principal;
    for (int i=0; i< linhas; i++){ 
        soma+= matriz[i][i];
    }
    int soma2;
    // Verifica se a soma de cada linha eh igual a soma da diagonal principal
    for (int i=0; i<linhas; i++){   
        soma2=0;
        // Realiza a soma dos termos da linha
        for (int j = 0; j<colunas; j++){
            soma2+=matriz[i][j];
        }
        if (soma2 == soma){
            continue;
        }
        // Se nao for, imprime que nao eh e retorna pra main
        else{
            printf("NAO");
            exit(1);
        }
    }
}

    // Verifica se a soma de cada coluna eh igual a diagonal principal
    for (int i=0; i<linhas; i++){   
        soma2=0;
        for (int j = 0; j<colunas; j++){
            soma2+=matriz[j][i];
        }
        if (soma2 == soma){
            continue;
        }
        else{
            printf("NAO");
            exit(1);
        }
    }
    int aux = linhas - 1;
    soma2=0;
    // Verifica se a soma da outra diagonal eh igual a soma da diagonal principal
    for (int i=0; i< linhas; i++){   
        soma2+= matriz[i][aux];
        aux --;
    }
    // Caso seja um quadrado magico
    if (soma2==soma){
        printf("SIM");
    // Nao eh quadrado magico
    else{
        printf("NAO");
    }
}