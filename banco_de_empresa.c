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
}Funcionario;


int main(){
    int tamanho, salario_base;
    Funcionario *pessoa;
    char nome_file[50];
    FILE *fp;

    scanf(" %s %d", nome_file, &salario_base);
    fp = fopen(nome_file, "r");
    if (fp == NULL){
        printf("Este banco de dados nao existe.");
        exit(1);
    }
    fscanf(fp," %d", &tamanho);
    pessoa=(Funcionario*)malloc(sizeof(Funcionario)*tamanho);
    for (int i = 0; i<tamanho; i++){
        fscanf(fp, " %s", pessoa[i].nome);
        fscanf(fp, " %d", &pessoa[i].idade);
        fscanf(fp, " %s", pessoa[i].profissao);
        fscanf(fp, " %d", &pessoa[i].salario);
    }
    fclose(fp);

    for (int i=0; i<tamanho; i++){
        if( pessoa[i].salario > salario_base){
            printf("%s\n", pessoa[i].nome);
            printf("%d\n", pessoa[i].idade);
            printf("%s\n", pessoa[i].profissao);
            printf("%d\n", pessoa[i].salario);
        }
    }

    free(pessoa);
    return 0;
}