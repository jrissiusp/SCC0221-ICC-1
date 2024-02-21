/*Programa que verifica os divisores
de um determinado numero natural

Autor: Joao Rissi Magnani (2023)*/

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel utilizada
    int num;
    // Leitura da variavel
    scanf("%d", &num);
    // For que verifica os divisores
    for(int i=1; i<=num; i++)
    {   
        if(num%i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}