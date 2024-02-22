/*Programa que verifica se um
numero eh primo

Autor: Joao Rissi Magnani (2023) */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas
    int num, resultado = 0;
    // Leitura do numero
    scanf("%d", &num);
    // Passa por todos possiveis divisores 
    for( int i = 2; i<=num/2; i++){
        // caso encontre um divisor, resultado deixa de ser zero e a estrutura de repeticao eh interrompida
        if (num%i==0){
            resultado++;
            break;
        }
    }
    if (resultado==0){
        printf("eh primo");
    }
    else{
        printf("n eh primo");
    }
    return 0;
}