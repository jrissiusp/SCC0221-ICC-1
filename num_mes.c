/* Programa que trabalha com switch
para identificar o mes do ano

Autor: Joao Rissi Magnani (2023) */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel para identificar o mes
    int mes;
    // Leitura do mes
    scanf("%d", &mes);
    // Analise de qual mes eh
    switch (mes)
    {
    case 1: printf("janeiro"); break;
    case 2: printf("fevereiro"); break;
    case 3: printf("março"); break;
    case 4: printf("abril"); break;
    case 5: printf("maio"); break;
    case 6: printf("junho"); break;
    case 7: printf("julho"); break;
    case 8: printf("agosto"); break;
    case 9: printf("setembro"); break;
    case 10: printf("outubro"); break;
    case 11: printf("novembro"); break;
    case 12: printf("dezembro"); break;
    default: printf("nao corresponde a nenhum mes"); break;
    }

    return 0;
}