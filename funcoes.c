/*Um dos primeiros programas que 
desenvolvi  que envolviam funcoes

Na main, somente a funcao "ordena"
eh utilizada

Autor: Joao Rissi Magnani (2023)  */



// Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>

/*Funcao que recebe a e b, e coloca
 o valor de a em b e de b em a*/
void troca(float *a, float *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

/* Funcao que recebe a e b, se forem iguais retorna 0,
 se a for menor retorna um numero negativo, se nao um numero positivo */

float comparar( float a, float b){
    if (a==b){
        return 0;
    }
    else if( a<b){
        return -1;
    }
    else {
        return 1;
    }
}

/* Funcao que recebe o vetor v e compara o primeiro elemento com o próximo
 elemento adjacente. Se o primeiro elemento for maior que o próximo, troca
 suas posicoes. Continua comparando e trocando os elementos adjacentes ao longo da lista.
 Ao final da primeira iteracao, o maior elemento estara na ultima posicao da lista.
 O processo se repete, porem ignorando a ultima posicao. Quando nao ha nenhuma troca
 durante uma iteracao completa, o processo finaliza. No final, retorna o numero 
 trocas feitas                                                                           */

int ordena(int n, int lista[]){
    int i, j, trocas = 0;
    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if( lista[j]> lista[j+1]){ //trocar elementos [j] e [j+1]
                int posicao= lista[j];
                lista[j] = lista[j+1];
                lista[j+1]= posicao;
                trocas++;
            }
        }
    }
    return trocas;
}

// Inicio da main
int main(int argc, char** argv) {
    // Variavel de tamanho do vetor
    int n;

    // Leitura do tamanho do vetor
    scanf(" %d", &n);
    
    // Declaracao do vetor
    int v[n];

    // Preenchendo o vetor
    for (int i = 0; i < n; i++) {
        scanf(" %d", &v[i]);
    }

    // Ordenando o vetor e observando quantas trocas foram feitas
    int trocas = ordena(n, v);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("Foram feitas %d trocas\n", trocas);

    return (EXIT_SUCCESS);
}

