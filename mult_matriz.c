/*Programa que calcula a multiplicação de matrizes

Autor: Joao Rissi Magnani (2023)               */

// Biblioteca utilizada
#include<stdio.h>

// Prototipos das funcoes
void matriz(int matriz[10][10], int x, int y);
void calc_matriz(int matriz[10][10], int matri[10][10], int matr[10][10], int x, int y, int z); // x é a linha da mat1, y linha da mat 2 e z coluna da mat 3


int main(){
    // Variaveis que recebem os tamanhos das matrizes e as matrizes
    int n1, m1, n2, m2;
    int mat1[10][10], mat2[10][10], mat3[10][10];
    // Leitura dos tamanhos das matrizes
    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);
    // Condicoes para ocorrer a multiplicacao
    if (m1 != n2){
        printf("Impossível multiplicar matrizes com essas dimensões.");
    }
    // Caso possa multiplicar
    else{
        matriz(mat1, n1, m1);
        matriz(mat2, n2, m2);
        calc_matriz(mat3, mat1, mat2, n1, n2, m2);
    }
    return 0;
}

// Preencher a matriz
void matriz(int matriz[10][10], int x, int y){
    // Percorrer as linhas e colunas para preencher
    for (int i = 0; i<x ; i++){
        for (int j = 0; j<y ; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calc_matriz(int matriz[10][10], int matri[10][10], int matr[10][10], int x, int y, int z){ // x é a linha da mat1, y linha da mat 2 e z coluna da mat 2
    // Variavel que armazena os valores da matriz resultante
    int soma;
    // Passara por todas linhas da mat1
    for (int i=0; i<x; i++){
        // Garante que ira percorrer todas as colunas da mat2
        for (int j=0; j<z; j++){
            soma = 0;
            // Passara pelos elementos das linhas da mat1 e das colunas da mat2
            for (int b = 0; b<y; b++){
                soma = soma + matri[i][b] * matr[b][j]; 
            }
            // preenche o resultado obtido
            matriz[i][j]= soma;
        }
   

    }
    // Printa a matriz resultante
    for (int i = 0; i<x; i++){
        for (int j = 0; j<z; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 

}