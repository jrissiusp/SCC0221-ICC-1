/*Programa que calcula a area de acordo com a
figura desejada

Autor: Joao Rissi Magnani (2023)*/

#include<stdio.h>


int main()
{
    char figura;
    float a, b, area, pi;
    pi = 3.14;               // atribui valor de pi
    scanf("%c", &figura);    // identificar figura
    switch(figura)
    {
        
        case 'q' :scanf("%f", &a); area = a*a; printf("%.2f", area); break;  // se for quadrado, identifica o valor do lado
        case 'r': scanf("%f %f", &a, &b); area= a*b; printf("%.2f", area); break;  // se for retangulo, identifica o valor da base e altura
        case 't': scanf("%f %f", &a, &b);area = a*b/2; printf("%.2f", area); break;  // se for triangulo, identifica valor da base e altura
        case 'c': scanf("%f", &a); area= pi*a*a; printf("%.2f", area); break;  // se for circulo, identifica o valor do raio
    }
    return 0;
}