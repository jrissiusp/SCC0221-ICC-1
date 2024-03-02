/*Programa que realiza a contagem de uma sequencia de "N"
numeros. Se o numero em questao for impar, eh realizado
a soma, se for par, a subtracao.

Autor: Joao Rissi Magnani                          (2023)*/

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main ()
{
    // Tamanho da sequencia
    int N;

    // Recebera a contagem
    float soma=0;

    // Leitura do valor de N
    scanf("%d", &N);
    
    // Realizando a contagem
    for (int i=1; i<=N; i++)
    {
        // Caso "i" seja par
        if (i%2 == 0)
        {
            soma= soma - (1.0/i);
        }
        // Caso "i" seja impar
        else
        {
            soma = soma + (1.0/i);
        }

    }

    // Imprimindo o resultado
    printf("%.4f", soma);

    return 0;
}