/*Programa que le uma string e realiza a contagem
de letras que aparecem

Autor: João Rissi Magnani(2023)                */

// Bibliotecas utilizadas
#include<stdio.h>
#include<stdlib.h>

// Inicio da main
int main(void){

    // Variaveis utilizadas
    int cont = 0, letra = 0;
    char *texto, carac, temp;
    // Leitura dos caracteres ate o fim do arquivo
    while(scanf("%c", &carac) != EOF){
        // Caso seja a primeira letra, deve alocar espaco para essa
        if(cont == 0){
            texto = (char*) malloc(sizeof(char));

            // Essa estrutura abaixo foi adotada para deixar todas letras minusculas a fim de evitar repeticao na hora da contagem
            if(carac < 91)
                texto[cont] = carac+32;
            else
                texto[cont] = carac;
        cont++;
        }
      
        else{
            // Caracteres devem ser letras
            if(((carac >= 65) && (carac <= 90)) || ((carac >= 97) && (carac <= 123))){
            texto = (char*) realloc(texto, sizeof(char)*cont+1);
                if(carac < 91)
                    texto[cont] = carac+32;
                else
                    texto[cont] = carac;
            cont++;
            }
    }
  }
    // Bubble sort para ordenar as letras
    for(int i = 0; i < cont-1; i++){
        for(int j = i+1; j < cont; j++){
            if(texto[i] > texto[j]){
                temp = texto[i];
                texto[i] = texto[j];
                texto[j] = temp;
            }
         }
     }

    temp = texto[0]; // variável de apoio
    
    // For que realiza a contagem das letras
    for(int i = 0; i <= cont; i++){
        if(temp == texto[i]){
            letra++;
        }
        // Quando encontra uma letra diferente, imprime quantas vezes apareceu a letra que estava sendo contada
        else{
            printf("%c: %d\n", temp, letra);
            letra = 1;                       // Reinicia contagem das letras
            temp = texto[i];                 // Atualiza a letra 
        }
    }

    // Desaloca o espaco ocupado
    free(texto);                        

    return 0;
}