/*Programa que calcula o colume de um cilindro

Autor: Joao Rissi Magnani (2023)           */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas para realizar o calculo do volume
    float altura, raio, pi=3.1415, volume;

    // Leitura do raio do cilindro
    printf("Insira o valor do raio: ");
    scanf("%f", &raio);

    // Leitura da altura do cilindro
    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    // Calculo do volume
    volume = pi * raio * raio * altura;

    // Imprimindo valor do volume do cilindro
    printf("O volume do clindro eh: %f", volume);

    return 0;
}