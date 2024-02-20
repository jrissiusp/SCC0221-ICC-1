/*Programa que realiza a contagem de caracteres
de um arquivo

Autor: João Rissi Magnani (2023)             */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main(){
    // Declaracoes das variaveis
    char nome_file[20], c;
    FILE *arquivo;
    // Nome do arquivo
    scanf("%s", nome_file);
    // Abrir como leitura
    arquivo= fopen(nome_file,"r");
    int cont=0;
    // Ir para posição final do arquivo
    fseek(arquivo, 0, SEEK_END); 
    // Contagem de bytes até a posição pré-definida
    cont = ftell(arquivo);
    // Fechar o arquivo
    fclose(arquivo);
    // Print do valor obtido
    printf("%d", cont);
    return 0;
}