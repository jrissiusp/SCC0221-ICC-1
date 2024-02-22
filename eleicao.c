/*Programa que trabalha com o 
uso do switch para identificar 
se uma pessoa pode votar ou nao

Autor: Joao Rissi Magnani (2023)*/

// Bibliotecas utilizadas
#include<stdio.h>

// Inicio da main
int main()
{
    // Variavel que guarda a idade
    int idade;

    // Leitura da idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verificacao das obrigacoes de voto
    switch (idade)
    {
        case 0 ... 15: printf("Nao pode votar"); break;
        case 16 ... 17:
        case 60 ... 150: printf("Ja pode votar, mas não eh obrigatorio"); break;
        default: printf("Voce eh obrigado a votar"); break; 
    }
    return 0;
}