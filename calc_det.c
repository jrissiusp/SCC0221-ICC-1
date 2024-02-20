/*Programa que realiza o calculo de determinantes 
de matrizes de ordem 1x1 2x2 e 3x3



Autor: João Rissi (2023)                       */

// biblioteca utilizada
#include<stdio.h>

// prototipos das funcoes
void matriz_1x1(int matriz[5][5]);
void matriz_2x2(int matriz[5][5]);
void matriz_3x3(int matriz[5][5]);

int main(){

    int N; 

    // declarando a matriz
    int matriz[5][5];
    // ordem da matriz
    scanf("%d", &N);
    // preenchendo a matriz
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    // caso a matriz tenha um unico elemento
    if (N==1){
        matriz_1x1(matriz);
    }
    // caso a matriz seja 2x2
    if (N==2){
        matriz_2x2(matriz);
    }
    // caso a matriz seja 3x3
    if(N==3){
        matriz_3x3(matriz);
    }
    return 0;
}

void matriz_1x1(int matriz[5][5]){
    printf("%d", matriz[0][0]);      // se for uma matriz com um elemento, sera ele mesmo
}

void matriz_2x2(int matriz[5][5]){
    int det;
    // calculo do determinante de uma matriz 2x2
    det = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    printf("%d", det);
}

void matriz_3x3(int matriz[5][5]){
    int soma, sub;
    int det;
    // calculo de uma matriz 3x3
    soma= matriz[0][0]*matriz[1][1]*matriz[2][2] + matriz[0][1]*matriz[1][2]*matriz[2][0] + matriz[0][2]*matriz[1][0]*matriz[2][1];
    sub = (matriz[0][1]*matriz[1][0]*matriz[2][2] + matriz[0][0]*matriz[1][2]*matriz[2][1] + matriz[0][2]*matriz[1][1]*matriz[2][0]);
    det = soma - sub;
    printf("%d", det);
}