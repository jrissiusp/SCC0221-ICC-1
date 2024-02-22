/*Programa que verifica, entre dois numeros
qual é o maior, ou se sao iguais

Autor: Joao Rissi Magnani (2023)         */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas para comparacao
    float a, b;

    // Leitura do valor das variaveis
    printf("Insira um numero: ");
    scanf("%f", &a);
    printf("Insira outro numero: ");
    scanf("%f", &b);

    // Condicoes de comparacao
    if(a<=b)
    {
        if(a<b)
        {
            printf("%f eh maior", b);
        }
        else
        {
            printf("os numeros sao iguais");
        }
    }
    else
    {
        printf("%f eh maior", a);
    }
    return 0;
}