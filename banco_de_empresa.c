/*Programa que lê o nome de um funcionário, sua idade,
sua profissão e por fim seu salario

Autor:João Rissi Magnani (2023)                    */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[20];
    int idade;
    char profissao[60];
    int salario;
}Funcionario;                 // struct para armazenar os dados


int main(){
    int tamanho, salario_base;
    Funcionario *pessoa;
    char nome_file[50];
    FILE *fp;

    scanf(" %s %d", nome_file, &salario_base);      // nome do arquivo e um salario base que foi pedido no exercicio
    fp = fopen(nome_file, "r");                     // abrir o arquivo para leitura
    if (fp == NULL){                               // caso o arquivo nao exista
        printf("Este banco de dados nao existe.");
        exit(1);
    }
    fscanf(fp," %d", &tamanho);                    // ler o tamanho do do nosso banco de dados do arquivo
    pessoa=(Funcionario*)malloc(sizeof(Funcionario)*tamanho);  // alocar esse tamanho para nossos parametros
    for (int i = 0; i<tamanho; i++){                // for que le, do arquivo, os dados de cada pessoa
        fscanf(fp, " %s", pessoa[i].nome);
        fscanf(fp, " %d", &pessoa[i].idade);
        fscanf(fp, " %s", pessoa[i].profissao);
        fscanf(fp, " %d", &pessoa[i].salario);
    }
    fclose(fp); // fecha o arquivo utilizado

    for (int i=0; i<tamanho; i++){       // printa a informacao de cada funcionario
        if( pessoa[i].salario > salario_base){
            printf("%s\n", pessoa[i].nome);
            printf("%d\n", pessoa[i].idade);
            printf("%s\n", pessoa[i].profissao);
            printf("%d\n", pessoa[i].salario);
        }
    }

    free(pessoa);                 // desaloca o espaco utilizado
    return 0;
}