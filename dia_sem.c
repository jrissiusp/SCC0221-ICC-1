/*Programa qque identifica o dia da
 semana com base na ordem dos dias:
 domingo 1o, segunda 2a...

 Autor: Joao Rissi Magnani (2023)*/

 // Bibliotecas utilizadas 
#include<stdio.h>

// Inicio da main
int main(){
    // Variavel utilizada
    int dia;
    // Leitura da variavel
    scanf("%d", &dia);
    // Switch que identifica o dia
    switch(dia)
    {
        case 1: printf("Domingo"); break;
        case 2: printf("Segunda"); break;
        case 3: printf("Terca"); break;
        case 4: printf("Quarta"); break;
        case 5: printf("Quinta"); break;
        case 6: printf("Sexta"); break;
        case 7: printf("Sabado"); break;
        default: printf("Nao corresponde a nenhum dia da semana"); break;
    }

    return 0;
}