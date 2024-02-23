/*Programa que lê uma sequencia de N numeros inteiros e 
em seguida ordena esses numeros na forma crescente

Autor: Joao Rissi Magnani (2023)                     */

// Biblioteca utilizada
#include <stdio.h>

// Prototipo da funcao
int* bubbleSort(int lista[], int n);

// Inicio da main
int main(){
    // Variavel que representa o tamanho da lista
    int N;
    // Leitura do tamanho da lista
    scanf("%d", &N);
    int lista[N];
    // Preencher os numeros dessa lista
    for (int a=0; a<N; a++){
        scanf("%d", &lista[a]);
    }
    // Ordena esses numeros
    bubbleSort(lista, N);
    // Imprime os numeros ja em ordem alfabetica
    for (int b=0; b<N; b++){
        printf("%d ", lista[b]);
    }
    printf("\n");
    return 0;
}

// Algoritmo bubble sorte
int* bubbleSort(int lista[], int n){
    int i, j;
    // Garante que ira passar por todas posicoes
    for (i=0; i<n; i++){
        // Sempre "exclui" o ultimo elemento, porque esse ja esta na posicao correta
        for (j=0; j<n-i-1; j++){
            if( lista[j]> lista[j+1]){ //trocar elementos [j] e [j+1]
                int posicao= lista[j];
                lista[j] = lista[j+1];
                lista[j+1]= posicao;
            }
        }
    }
    return lista;
}