/* Programa que verifica a paridade
de um numero

Autor: Joao Rissi Magnani (2023)  */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel que recebe o numero a ser analisado
    int a;
    // Leitura desse numero
    printf("insira um numero inteiro:");
    scanf("%d", &a);
    // Se o resto da divisao por 2 for 0, eh par
    if(a%2==0)
    {
        printf("%d eh par", a);
    }
    // Caso contrario, eh impar
    else{
        printf("%d eh impar", a);
    }

    return 0;
}