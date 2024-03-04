/*Proggrama que verifica se um triangulo eh
equilatero, isosceles ou escaleno

Autor: Joao Rissi Magnani (2023)     */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variaveis que receberao os valores dos lados
    // do triangulo
    float a, b, c;

    // Leitura dos lados
    scanf("%f %f %f", &a, &b, &c);

    // Verificacao se o triangulo eh valido
    if(a+b>c && a+c>b && b+c>a)
    {
        // Verificacao do tipo do triangulo

        if(a==b && b==c)
        {
            printf("EQUILATERO");
        }
        else if ((a==b && b!=c)|| (a==c && c!=b) || (b==c && c!=a))
        {
            printf("ISOSCELES");
        }
        else
        {
            printf("ESCALENO");
        }
    }
    else
    {
        printf("INVALIDO");
    }
    return 0;
}