/*Programa que transforma o numero
de dias em informacoes mais precisas

Autor: Joao Rissi Magnani (2023)*/

// Bbliotecas utilizadas
#include<stdio.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas
    int dias, anos, semanas, days;
    // Leitura da quantidade de dias
    scanf("%d", &dias);
    // Calculo de anos
    anos = dias / 365;
    // Calculo de semanas
    semanas = (dias % 365) / 7;
    // Calculo de dias
    days = (dias % 365) % 7;

    // Print das informacoes obtidas
    printf("%d anos \n", anos);
    printf("%d semanas \n", semanas);
    printf("%d dias \n", days);


    return 0;
}