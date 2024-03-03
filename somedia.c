/* Programa que le 10 valores e calcula a soma
e a media desses 10 valores

Autor: Joao Rissi Magnani (2023)           */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main(){
    // Variaveis utilizadas
    float n, media = 0, soma = 0;
    int i = 1;

    // Ler os numeros e realizar o calculo da soma
    for (; i<=10; i++){
        scanf("%f", &n);
        soma = soma +n;
    }

    // Ajustar o valor de i
    i--;
    
    // Calcular a media
    media= soma/ i;

    // Imprime a media e depois a soma
    printf("%f %f", media, soma);
    return 0;
}