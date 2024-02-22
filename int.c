/*Programa que identifica se um inteiro
eh positivo, negativo ou zero
Autor: Joao Rissi Magnani (2023)     */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Leitura do inteiro
    int a;
    printf("Insira um numero inteiro: ");
    scanf("%d", &a);

    // Verificacao do inteiro
    if (a>0)
    {
        printf("%d eh positivo", a);
    }
    else if (a==0)
    {
        printf("%d eh zero", a);
    }
    else{
        printf("%d eh negativo", a);
    }
    
    return 0;
}