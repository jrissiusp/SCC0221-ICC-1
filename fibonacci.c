/*Programa que calcula o n-esimo
termo da sequenciad de fibonacci

Autor: Joao Rissi Magnani (2023)*/

// Bibliotecas utilizadas
#include <stdio.h>

// Inicio da main
int main ()
{
    // Variaveis utilizadas
    int n, anterior=1 , resultado=0;

    // Leitura do n-esimo termo
    scanf("%d", &n);

    // Calculo do n-esimo termo
    for(int i = 1; i<=n; i++)
    {
    resultado = resultado + anterior;
    anterior = resultado - anterior;
    }
    printf("%d", resultado);
    return 0;


}