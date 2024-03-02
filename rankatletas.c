/*programa que lê quantos atletas participam de um campeonato
e os rankeiam de acordo com a pontuação dos mesmos

Autor: Joao Rissi Magnani (2023)                          */

// Biblioteca utilizada
#include <stdio.h>

// Prototipo da funcao
int* bubbleSort(int lista[], int n);

// Inicio da main
int main(){

    // Tamanho da lista
    int N;
    
    // Leitura do tamanho da lista
    scanf("%d", &N);

    // Vetores que serao usados de auxilio para obtermos as informacoes
    int pontuacao[N], lista2[N], *p1, *p2;
    
    // Preenchendo as listas
    for (int i =0; i< N; i++){
        scanf("%d",  &pontuacao[i]);
        //criar uma lista adicional para realizar a comparação
        lista2[i] = pontuacao[i]; 
    }

    // Ordenar a lista para saber a classificação do atleta
    bubbleSort(lista2, N); 

    // Variaveis que receberao posicao e classificacao
    int posicao, classificacao;

    // Percorrer os termos do nosso vetor que nao estao em ordem de pontuacao
    for (int j = 0; j<N ; j++){

        // Nao existe posicao "0"
        posicao = j+1;

        // Comeca como ultimo colocado, cada vez que obtem maior pontuacao do que outro, sobe de classificação
        classificacao = N; 

        // Percorrer a lista original e a lista em ordem
        p1=&pontuacao[j];
        p2= lista2;

        // For que analisa a pontuacao
        for (int a = 0; a<N; a++){
            // Cada vez que apresenta pontuacao maior do que outro, ganha uma classificacao
            if(*p1>*p2){
            classificacao--;
            p2++;
            }
        }

        // P/ex: 1º Ateta (posicao no vetor original), 10 Pontos (pontuacao que obteve), 3º Colocado (classificacao apos a analise)
        printf("%dº Atleta, %d Pontos, %dº Colocado\n", posicao, pontuacao[j], classificacao);
    }
    return 0;
}

// Ordena os termos de um vetor
int* bubbleSort(int lista[], int n){ 
    int i, j;
    for (i=0; i<n; i++){
        for (j=0; j<n-i-1; j++){
            if( lista[j]> lista[j+1]){ //trocar elementos [j] e [j+1]
                int posicao= lista[j];
                lista[j] = lista[j+1];
                lista[j+1]= posicao;
            }
        }
    }
    return lista;
}