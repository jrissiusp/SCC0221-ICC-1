/*Programa que imprime uma string
invertida


Autor:João Rissi (2023)        */

// Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Inicio da main
int main() {
    // Variaveis string, caracter
    char *word, carac;

    // Leitura dos caracteres
    scanf("%c", &carac);

    int contador =1;
    
    // Alocação inicial
    word = (char *)malloc(sizeof(char));
    word[0]= carac; 
    
    // Leitura e armazenamento dos caracteres em uma grande string
    while(scanf("%c", &carac) != EOF){
        contador++; 
        word= (char*)realloc(word, sizeof(char)*contador);
        word[contador - 1] = carac;
    }
    // Impressao invertida da string
    for (int i = 0; i<contador; i++){
        printf("%c", word[contador-i-1]);
    }
    free(word);  // Liberar a memória alocada
    return 0;
}
