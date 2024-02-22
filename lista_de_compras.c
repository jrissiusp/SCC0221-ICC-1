/*Programa que le uma ista de compras
e coloca em ordem alfabetica

**Para o programa funcionar perfeitamente, 
todas letras de todas strings devem ser
minusculas ou maiusculas

Autor: João Rissi Magnani(2023)     */


// Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipos das funcoes
void bubbleSort(char **lista, int n);
void print_lista(char **lista, int n);

// Inicio da main
int main() {
    // String que eh a condicao de saída
    char *saida = "sair";  
    // Vetor de strings(matrizes)                      
    char **lista;              
    // String auxiliar para alocar dinamicamente o tamanho das strings                 
    char produto[25];                      
    // Variaveis auxiliares para realizarmos alocação dinamica      
    int tamanho = 0, tam;                        
    // Primeira alocação dinamica
    lista=(char**)malloc(sizeof(char*));         
    // Loop infinito até que atinja a condição de saída
    while (1) {           
        // Leitura da string                       
        scanf(" %s", produto);
        // Condição de saída (string == "sair")
        if (strcmp(produto, saida) == 0) {       
            break;
        }

        // Cada palavra válida aumenta o tamanho do vetor de strings
        tamanho++;                  
        // Realocação com o tamanho atualizado              
        lista = (char **)realloc(lista, sizeof(char *) * tamanho); 
        // Tamanho da nossa string que será alocada
        tam = strlen(produto);                    
        // Alocação da string de acordo com o tamanho 
        lista[tamanho - 1] = (char *)malloc((tam + 1) * sizeof(char)); 
        // Copia a string
        strcpy(lista[tamanho - 1], produto);      

    }
    bubbleSort(lista, tamanho);                   
    print_lista(lista, tamanho);                

    // Desalocar cada string
    for (int i = 0; i < tamanho; i++) {
        free(lista[i]);                          
    }
    // Desalocar a matriz
    free(lista);                                 

    return 0;
}

// Funcao que ordena alfabeticamente
void bubbleSort(char **lista, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Caso a string "j+1" seja menor (vem antes na ordem alfabetica)
            if (strcmp(lista[j], lista[j + 1]) > 0) {
                char *aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}

// Funcao que printa a lista
void print_lista(char **lista, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d) %s\n", i + 1, lista[i]);
    }
}
