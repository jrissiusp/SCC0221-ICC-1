/* Programa que trabalha com o switch 
para possiveis cenarios de nota

Autor: Joao Rissi Magnani (2023)   */

// Bibliotecas utilizadas
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel utilizada para nota
    int nota;
    // Leitura da nota
    scanf("%d", &nota);
    // Possiveis cenarios
    switch (nota)
    {
        case 0 ... 4: printf("esta de recuperacao, melhore"); break;
        case 5 ... 7: printf("passou, mas da para melhorar"); break;
        case 8 ... 9: printf("muito bom"); break;
        case 10: printf("excepcional"); break;
        default: printf("nota invalida"); break;   
    }
    return 0;
}