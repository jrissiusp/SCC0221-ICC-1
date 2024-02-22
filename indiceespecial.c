/*O ındice especial de um vetor corresponde ao ındice cuja soma dos elementos estritamente a sua
esquerda eh igual a soma dos elementos estritamente a sua direita.
Programa em C que recebe como entrada a quantidade N de elementos de um
vetor e em seguida N inteiros, encontra o ındice especial do vetor e imprime sua posicao.

Autor: Joao Rissi Magnani (2023)                                                              */

// Biblioteca utilizada
#include<stdio.h>

// Prototipos das funcoes
int soma_vetor(int vetor[], int n);
int encontrar_indice_especial(int vetor[], int n);

// Inicio da main
int main(){
    int n;
    scanf("%d", &n);
    int lista[n];
    for (int i =0; i<n; i++){
        scanf("%d", &lista[i]);
    }
    int indice_especial = encontrar_indice_especial(lista, n);
    if (indice_especial != -1) {
        printf("%d\n", indice_especial);
    }
    else {
        printf("-1\n");
    }

    return 0;
}

// Funcao que realiza a soma de todos elementos do vetor
int soma_vetor(int vetor[], int n){
    int soma=0;
    for (int i =0 ; i<n ; i++){
        soma = soma + vetor[i];
    }
    return soma;
}

// Funcao que retorna, caso exista, o indice especial
int encontrar_indice_especial(int vetor[], int n) {
    int soma_esquerda = 0;
    int soma_total = soma_vetor(vetor, n);

    for (int i = 0; i < n; i++) {
        // Remove o elemento atual da soma total 
        // (comparando a soma à direita com a soma a esquerda)
        soma_total = soma_total - vetor[i]; 
        if (soma_esquerda == soma_total) {
            return i; // Retorna o índice especial encontrado
        }
        soma_esquerda = soma_esquerda + vetor[i]; // Atualiza o valor da soma à esquerda
    }

    return -1; // Caso não seja encontrado um índice especial
}
