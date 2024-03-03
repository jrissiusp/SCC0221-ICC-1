/* Programa que imprime a tabuada ate o 10 de
um determinado valor n

Autor: Joao Rissi Magnani (2023)          */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main(){

    // Variaveis utilizadas
    float n, resultado;

    // Leitura do valor a se realizar a tabuada
    scanf("%f", &n);

    // Realizacao dos calculos
    for (int i=1; i<=10; i++){
        
        resultado = n*i;

        // Impressao do valor obtido
        printf("%f\n", resultado);
    }
    return 0;
}