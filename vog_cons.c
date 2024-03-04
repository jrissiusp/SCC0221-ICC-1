/*Programa que treina o uso do switc verificando se uma 
letra eh uma vogal ou uma consoante

Autor: Joao Rissi Magnani (2023)                    */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel que recebe o caracter
    char c;

    // Leitura do caracter
    scanf("%c", &c);

    // Verificacao se eh vogal ou consoante
    switch(c)
    {
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': 
        case 'a':
        case 'e':
        case 'i':
        case'o':
        case 'u': printf("Eh uma vogal"); break;

        case 66 ... 68: 
        case 70 ... 72: 
        case 74 ... 78: 
        case 80 ... 84: 
        case 86 ... 90: 
        case 98 ... 100: 
        case 102 ... 104: 
        case 106 ... 110: 
        case 112 ... 116: 
        case 118 ... 122: printf("Eh uma consoante"); break; 

        default: printf("Nao eh uma letra do alfabeto"); break;

    }

    return 0;
}