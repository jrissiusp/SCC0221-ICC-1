/* Programa que lê um vetor de tamanho N e pede para você inserir um intervalo de posiçoes
nesse vetor para que ele realize a soma dos numeros presentes entre essas posiçoes

Autor: Joao Rissi Magnani (2023)                                                         */

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main(){
    // Variaveis utilizadas
    int n, a, b, soma=0;

    // Leitura do tamanho do vetor
    scanf("%d", &n);

    // Declaracao do vetor
    int  lista[n];

    // Preenchendo valores do vetor
    for (int i=0; i<n; i++){
        scanf("%d", &lista[i]);
    }

    // Leitura do intervalo que ira se realizar a soma
    scanf("%d %d", &a, &b);

    // For que realiza a soma dentro do intervalo pre-estabelecido
    for (; a<=b; a++){
        soma= soma+ lista[a];
    }

    // Imprime a soma
    printf("%d \n", soma);
    return 0;

}