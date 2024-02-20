/*Programa que identifica o numero 
de linhas, palavras e caracteres
de uma frase

Autor: Joao Rissi Magnani (2023)*/

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main(){

    // Variaveis utilizadas
    char novo, anterior =0;
    int linhas=1, caracteres=0, palavras=1;   // Ja inicia com pelo menos uma palavra e uma linha

    // Repeticao que le os caracteres ate o fim do arquivo
    while( scanf("%c", &novo ) != EOF){
        // Switch para identificar o caracter
        switch (novo){
            case 10: linhas++; break;         // Caso seja um caracter de nova linha
            case 32: palavras++; break;       // Caso seja um caracter de espaco
            case 33 ... 126:                  // Demais caracteres
            if(anterior == 10){               // Caso esteja no comeco de uma nova linha
                palavras ++;
            } 
            caracteres++; break;
        }
        anterior = novo;                     // Atualiza o caracter anterior
    }
        // Printa os valores observados
        printf("Caracteres: %d \n", caracteres);
        printf("Palavras: %d\n", palavras);
        printf("Linhas: %d", linhas);
    

    return 0;
}