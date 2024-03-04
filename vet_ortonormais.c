/*Programa que verifica se dois vetores sao ortonormais
Um vetor é ortonormal quando:
u · v = u1v1 + u2v2 + . . . + unvn = 0
modulo de u (raiz da soma dos elementos ao quadrado) = 1
modulo de v (raiz da soma dos elementos ao quadrado) = 1


Autor: Joao Rissi Magnani (2023)                     */

// Bibliotecas utilizadas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Prototipos das funcoes
void preenche_vetor(int *vetor, int n);
int mult_vetor(int *vetor1, int *vetor2, int n);
float modulo_vetor(int *vetor, int n);

// Inicio da main
int main(){

    // "n" eh o tamanho do vetor, "vet1" eh o primeiro vetor, "vet2" o segundo vetor
    int n, *vet1, *vet2;

    // Leitura do tamanho do vetor
    scanf("%d", &n);

    // Alocando o tamanho necessario
    vet1=(int *)malloc(sizeof(int)*n);
    vet2=(int *)malloc(sizeof(int)*n);

    // Preenchendo cada vetor
    preenche_vetor(vet1, n);
    preenche_vetor(vet2, n);

    // Caso todas condições forem atendidas, ele eh ortonormal
    if(mult_vetor(vet1, vet2, n) == 0 && modulo_vetor(vet1, n) == 1 && modulo_vetor(vet2, n)==1){ 
        printf("sao ortonormais");
    }
    // Caso alguma condição nao seja atendida
    else{ 
        printf("nao sao ortonormais");
    }

    // Desalocando o espaco ocupado
    free(vet1);
    vet1 = NULL;
    free(vet2);
    vet2 = NULL;
    return 0;
}


// Funcao que preenche o vetor
void preenche_vetor(int *vetor, int n){
    // Eh realizado a leitura termo a termo do vetor
    for (int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
}

// Funcao que multiplica os termos correspondentes dos vetores
int mult_vetor(int *vetor1, int *vetor2, int n){
    int soma = 0;
    // Verificacao do valor da multiplicacao dos termos
    for (int i=0; i<n; i++){
        soma+= vetor1[i] * vetor2[i]; 
    }
    return soma;
}
// Funcao que calcula o modulo (norma) do vetor (de acordo com o enunciado)
float modulo_vetor(int *vetor, int n){
    float modulo;
    int aux = 0;
    // O modulo (norma) de um vetor eh a raiz da soma do quadrado
    // de todos os termos do vetor
    for (int i=0; i<n; i++){
        aux+= pow(vetor[i], 2);
    }
    modulo = sqrt(aux);
    return modulo;
}
