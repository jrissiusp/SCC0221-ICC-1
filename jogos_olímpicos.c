/*Programa que calcula em que posição os países
 terminaram os jogos olímpicos               
 
 
 Autor: João Rissi Magnani (2023)           */

// Bibliotecas utilizadas
#include<stdio.h>
#include<stdlib.h>

// Armazenar os dados dos paises
typedef struct{
    char pais[3];
    int ouro;
    int prata;
    int bronze;
}Olimpiadas;

// Prototipos das funcoes
void pontuacao(Olimpiadas *x, int n);
void bubbleSort(Olimpiadas *x, int n);

// Inicio da main
int main(){
    // Variaveis de comparacao e a que servira de apoio para a alocacao
    Olimpiadas *classificacao;
    int n;
    // Leitura do espaco que sera alocado
    scanf("%d", &n);
    // Alocacao
    classificacao = (Olimpiadas*) malloc(sizeof(Olimpiadas)*n);
    // Preencher a pontuacao
    pontuacao(classificacao, n);
    // Ordenar a classificacao 
    bubbleSort(classificacao, n);
    
    // Impressao dos resultados
    for (int i=0; i<n; i++){
        printf("%s %d %d %d\n", classificacao[i].pais, classificacao[i].ouro, classificacao[i].prata, classificacao[i].bronze);

    }
    // Desalocacao
    free(classificacao);

}

// Preenche a pontuação de cada pais
void pontuacao(Olimpiadas  *x, int n){
    for (int i=0; i<n; i++){
        scanf(" %s %d %d %d", x[i].pais, &x[i].ouro, &x[i].prata, &x[i].bronze);

    }
}

void bubbleSort(Olimpiadas *x, int n){
    int i, j;
    Olimpiadas posicao;

    // Primeiro criterio sao as medalhas de ouro, quem tem mais fica em primeiro
    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if( x[j].ouro < x[j+1].ouro){ //trocar elementos [j] e [j+1]
                posicao = x[j];
                x[j] = x[j+1];
                x[j+1]= posicao;
            }
        }
    }
    // Caso haja paises com a mesma quantidade de medalhas de ouro, analisa as de prata
    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if( x[j].ouro == x[j+1].ouro){ //trocar elementos [j] e [j+1]
                if( x[j].prata < x[j+1].prata){
                    posicao = x[j];
                    x[j] = x[j+1];
                    x[j+1]= posicao;
                }
            }
        }
    }
    // Ouro e prata empatados, analisa as de bronze
    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if( x[j].ouro == x[j+1].ouro){ //trocar elementos [j] e [j+1]
                if( x[j].prata == x[j+1].prata){
                    if(x[j].bronze < x[j+1].bronze){
                        posicao = x[j];
                        x[j] = x[j+1];
                        x[j+1]= posicao;
                    }
                }
            }
        }
    }

}