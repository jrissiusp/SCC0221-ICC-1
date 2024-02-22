/*  Programa que identifica se
eh uma letra maiuscula, minuscula
ou um digito

Autor: Joao Rissi Magnani (2023)  */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel caracter
    char c;
    // Leitura do caracter
    printf("Insira uma letra: ");
    scanf("%c", &c);
    // Verificacao do caracter de acordo com a tabela ascii
    switch (c)
    {
    case 65 ... 90: printf("Letra maiuscula");
        break;
    case 97 ... 122: printf("Letra minuscula");
        break;
    default: printf("Dígito");
        break;
    }
    return 0;
}