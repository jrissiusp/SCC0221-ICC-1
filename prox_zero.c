/*Programa que aloca dinamicamente um 
vetor de n numeros e depois identifica qual 
valor eh o mais proximo de zero e suas posi-
coes no vetor em questao

Autor: Joao Rissi Magnani (2023)          */

// Bibliotecas utilizadas
#include <stdio.h>
#include<stdlib.h>

// Prototipo de funcao
void prox_zero(int *vetor, int n);

// Inicio da main
int main(){

    // "tam" recebe o tamanho do vetor, "*vetor" eh o proprio vetor
    int tam, *vetor;
    
    // Leitura do tamanho do vetor
    scanf("%d", &tam);

    // Aloca dinamicamente o vetor
    vetor = (int *)malloc(sizeof(int) * tam);

    // Leitura dos valores do vetor
    for (int i = 0; i<tam; i++){
        scanf("%d", &vetor[i]);
    }

    // Chama a funcao principal do programa
    prox_zero(vetor, tam);

    // Desaloca o espaco ocupado
    free(vetor);

    return 0;
}

// Funcao que verifica qual o valor mais proximo de zero
void prox_zero(int *vetor, int n){

    // "prox" recebe o valor que eh mais perto de zero,
    // "pos[n]" ira receber a posicao do vetor que o numero estava,
    // "aux" variavel auxiliar para preservar o valor do numero,
    // "equal" sera a posicao de "pos[n]" que recebe as posicoes
    // do vetor original
    int prox, pos[n], aux, equal=0;

    // Recebe o primeiro valor
    prox = vetor[0];

    // evitar lixo de memoria caso o primeiro termo seja o mais proximo de zero
    pos[0]= 0;

    // Percorre todos os termos do vetor inicial
    for (int i=0;i<n; i++){
        // Preservar o valor original
        aux = vetor[i];
        vetor[i] *= vetor[i];
        // Comparar valores absolutos, se for menor atualiza
        if (vetor[i]< (prox *prox)){ 
            // "equal" retorna para zero, porque a contagem dos numeros foi reiniciada
            equal = 0;
            // Atualiza o valor de "aux"
            prox = aux;
            // Primeiro indice do vetor passa a ser a posicao do vetor original que contem o novo valor
            pos[0]=i;
        }
        // Adicionar posicoes em que o numero igual está no vetor de que recebe as posicoes
        else if (vetor[i] == (prox * prox) && i!=0){ 
            equal++;
            pos[equal] = i;
        }
    }
    // Imprime o valor mais proximo de zero
    printf("%d\n", prox); 
    
    // Imprime as posicoes desse valor no vetor original
    for (int i=0; i<=equal; i++){
        printf("%d ", pos[i]);
    }
     
    
}





