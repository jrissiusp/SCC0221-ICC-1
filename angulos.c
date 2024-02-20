/*Programa que calcula, com base nos angulos,
se um triangulo eh valido


Autor: João Rissi Magnani (2023)          */




#include<stdio.h>

int main()
{
    float A, B, C;    // receberao os valores dos angulos
    scanf("%f %f", &A, &B);          // inserir dois primeiros angulos
    if ((A+B)<180 && (A+B) > 0)      // condicoes de existencia do triangulo
    {
        C = 180 - (A+B);             // o valor do ultimo angulo eh baseado em seus outros dois
        printf("%f ", C);
    }
    else                             // caso os angulos nao formem um triangulo
    {
        printf("Ângulos inválidos");
    }
    return 0;
}