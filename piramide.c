/* Programa que imprime N linhas de uma
piramide de '*'

Autor: Joao Rissi Magnani (2023)     */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main(){
    // Variavel 'n' representa o numero de linhas, as demais sao auxiliares
    int n, i, j, k;
    // Leitura do numero de linhas
    scanf("%d", &n);
    // Repeticao que passa por todas linhas
    for (i = 1; i <= n; i++){
        // Precisa ter "espacos" para que os "*" fiquem alinhados.
        // Quanto mais ao topo estiver, mais "espacos" terao.
        for (j = 1; j <= n-i; j++){
            printf(" ");
        }
        // Para que fique alinhado, imprime tambem de acordo com a linha em que esta.
        // Quanto mais perto da base, mais '*' tera.
        for( k = 1; k <= i; k++){
        printf("**");
        }
        printf("\n");
    }
    return 0;
}