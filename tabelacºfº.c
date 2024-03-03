/* Programa que imprime uma tabela de 
graus em celsius e em farenheit

Autor: Joao Rissi Magnani (2023)   */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Valor minimo de celsius e declaracao da variavel
    // que ira receber o valor em farenheit
    float celsius = -273, fahren;

    // Estrutura que percorre os valores ate 100°C
    do{

        // Calculo de conversao para farenheit
        fahren = (9/5.0)*celsius +32;

        // Imprime os resultados
        printf("celsius: %.0f fahren: %.2f \n", celsius, fahren);

        // Atualiza o valor de celsius
        celsius ++;
    }while( celsius <=100);
    return 0;
}