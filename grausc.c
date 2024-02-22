/*Programa que converte graus celsius
em graus farenheit

Autor: Joao Rissi Magnani (2023)   */

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas
    float celsius, faren;
    
    // Garantir que um valor numerico valido foi inserido
    if (scanf("%f", &celsius) == 1 && celsius >= -273)
    {
        // Calculo da conversao para farenheit
        faren = ((9 * celsius) / 5) + 32;
        printf("%.2f", faren);
    }
    else
    {
        printf("Temperatura invalida. Digite um valor numerico maior ou igual a -273 oC.\n");
    }
	
    return 0;
}
