/*Programa que realiza a correção de provas


Autor: João Rissi Magnani (2023)         */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main(){
    // Variaveis utilizadas
    char arq1[25], arq2[25], c, d;
    FILE *arq_1, *arq_2;
    int cont=0;
    // Nomes dos arquivos
    scanf(" %s", arq1);
    scanf(" %s", arq2);
    // Abertura dos arquivos para leitura (um dos arquivos eh o gabarito, o outro sao as respostas)
    arq_1=fopen(arq1, "r");
    arq_2=fopen(arq2, "r");
    // Compara as respostas com o gabarito
    while(fscanf(arq_1, "%c", &c)!=EOF){
        fscanf(arq_2, "%c", &d);
        if (c==d){
            cont++;
        }
    }
    // Fechamento dos arquivos
    fclose(arq_1);
    fclose(arq_2);
    // Verifica a nota do aluno
    switch (cont){
        case 0 ...2: printf("%d REPROVADO", cont); break;
        case 3 ...4: printf("%d RECUPERACAO", cont); break;
        case 5 ...10: printf("%d APROVADO", cont); break;
    }
    return 0;
}