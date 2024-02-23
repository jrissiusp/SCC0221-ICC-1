/*Programa que identifica palavras distintas
com base na leitura de arquivos

Autor: João Rissi Magnani (2023) */

// Bibliotecas utilizadas
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas
    char *nome_arq, palavras[100][100], atual[100];
    FILE *arquivo;
    int tamanho = 0, copia = 0;
    
    // Realizando a abertura do arquivo
    nome_arq= (char*)malloc(sizeof(char)*40);
    scanf("%s", nome_arq);
    arquivo = fopen(nome_arq, "r");
    
    // Repeticao que ira realizar a leitura das strings do arquivo
    while ((fscanf(arquivo, "%s", atual)) != EOF) {
        // Percorre cada caracter da string lida
        for (int i = 0; i < strlen(atual); i++) {
            // caso o caracter atual nao seja uma letra 
            if (atual[i] < 65) {
                // Caso nao seja '-', iremos pular esse caracter na nossa analise, por isso o uso do memmove
                if (atual[i] != '-') {
                    // iremos copiar "strlen(atual)-i" caracteres do conteudo de "atual+i+1" para "atual+i".
                    // Na pratica pulamos o caracter atual
                    memmove(atual+i, atual+i+1, strlen(atual)-i);
                    i--;
                } else {
                    // Caso o '-' esteja na ultima posicao da palavra, sera ignorado, repetindo a mesma logica acima
                    if (i == strlen(atual)-1) {
                        memmove(atual+i, atual+i+1, strlen(atual)-i);
                        i--;
                    }
                }
            }
            // Deixar todas letras minusculas para evitar erros na hora de comparar as palavras
            if (atual[i] < 97 && atual[i] != '-')
                atual[i] += 32;
        }
        // Percorre as palavras existentes e compara com a atual
        for (int i = 0; i < tamanho; i++)
            // Caso encontre palavras iguais, atualiza o valor de copia para 1
            if (strcmp(palavras[i], atual) == 0)
                copia = 1;
        
        // Se nao encontrar palavras iguais, atualiza o numero de palavras distintas (tamanho)
        // e atualiza a matriz das strings com a nova palavra, que sera utilizada para realizar 
        // a comparacao com o restante das palavras
        if (copia == 0) {
            strcpy(palavras[tamanho], atual);
            tamanho++;
        }
        // Volta para o valor inicial para evitar erros
        copia = 0;
    }
    
    // Fechamento do arquivo
    fclose(arquivo);
    // Desalocacao do espaco ocupado
    free(nome_arq);
    // Imprime o numero de palavras distintas
    printf("O texto possui %d palavras distintas\n", tamanho);
    // Imprime as palavras distintas encontradas
    for (int i = 0; i < tamanho; i++)
        printf("%s\n", palavras[i]);
    
    return 0;
}