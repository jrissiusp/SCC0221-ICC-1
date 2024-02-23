/* Programa que realiza o calculo 
de potencias 

Autor: Joao Rissi Magnani (2023) */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel x eh o numero que  realizara a potencia, pot ira receber o resultado da potencia
    float x, pot;
    // 'n' eh a potencia elevada, 'i' eh auxiliar para o for
    int n, i=1;
    // Leitura do numero (x) e a potencia a qual sera elevado (n)
    scanf("%f %d", &x, &n);
    // Inicia como 1 para nao haver erros nos calculos
    pot = 1;
    // A cada repeticao uma nova multiplicacao eh realizada
    for (; i<=n; i++){
        pot = pot*x;
    }
    // Impressao do resultado
    printf("%f", pot);
    return 0;
}