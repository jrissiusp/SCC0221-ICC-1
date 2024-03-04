/* Programa que recebe tres angulos e verifica
se pode ser formado um triangulo

Autor: Joao Rissi Magnani (2023)              */

// Bibliotecas utilizadas
#include <stdio.h>

// Inicio da main
int main ()
{
    // Variaveis que recebem os valores dos angulos
    float a, b, c;

    // Leitura dos valores dos angulos
    printf("insira os angulos do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    // Verificacao matematica se eh formado ou nao trinagulo
    if (a+b+c < 180 && a>0 && b>0 && c>0)
    printf("O triangulo eh valido");
    else
    printf("o triangulo eh invalido");

    return 0;
}