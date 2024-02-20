/*Programa que criptografa uma mensagem

Autor: Joao Rissi Magnani (2023)*/

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main() {
    // Variaveis utilizadas
    char novo;
    int linhas=1, carac_linha=0, count;
    // Leitura dos caracteres para criptografia
    while(scanf("%c", &novo) != EOF){
        count = novo;
        carac_linha++;
        // Criptografia propriamente dita (pode ser feita de diversas formas)
        switch(novo){
            case 10: linhas++; carac_linha=0; break;
            case 65 ... 90: count = (((count + carac_linha) *linhas) %26 ) + 65; novo = count; break;
            case 97 ... 122: count = (((count + carac_linha) *linhas) %26 ) + 97; novo = count; break;
        }
        printf("%c", novo); // "Novo" caracter
    }
    return 0;
}
