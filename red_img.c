/*Programa que realiza o redimensionamento de imagens
(multiplicando os valores da matriz em questao)

Autor: João Rissi (2023)                           */

// Biblioteca utilizada
#include<stdio.h>

// Prototipos das funcoes
void preenche_mat(float matriz[10][2], int n);
void redimensiona(float matriz[10][2],int n, float m);
void print_mat(float matriz[10][2], int n);

// Inicio da main
int main(){
    
    // Recebera o numero de linhas da matriz das imagens
    int n;
   
    // Numero que multiplicara os termos da matriz
    float m;

    // Leitura dos valores
    scanf ("%d %f", &n, &m);

    // Declaracao da matriz
    float matriz[10][2];

    // Chamadas das funcoes
    preenche_mat(matriz, n);
    redimensiona(matriz, n, m);
    print_mat(matriz, n);
    
    return 0;
}

// Funcao que preenche a matriz
void preenche_mat(float matriz[10][2], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Funcao que atualiza os valores
void redimensiona(float matriz[10][2],int n, float m){
    for (int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            matriz[i][j]= matriz[i][j] * (m) ;
        }
    }
}

// Funcao que imprime a matriz
void print_mat(float matriz[10][2], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<2; j++){
            printf("%0.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}
