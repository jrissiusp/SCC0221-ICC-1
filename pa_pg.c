/* Programa que calcula a pa e pg
de um mesmo termo com razao igual

Autor: Joao Rissi Magnani (2023) */

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main() {
    // Variavel que recebe o numero de termos da pa e pg
    int n;
    // Variaveis que recebem o primeiro termo, a razao, e os valores da pa e pg
    float a, razao, pa, pg;
    // Leitura dos valores
    scanf ("%d %f %f", &n, &a, &razao);
    // Atribuicao do primeiro termo
    pa = a;
    pg = a;
    printf("PA: ");
    // Printa cada termo da pa e atualiza o valor do proximo
    for (int i = 1; i <= n; i++){
        printf("%.3f ", pa);
        pa = pa + razao;
    }
    printf("\n");
    printf("PG: ");
    // Printa cada termo da pg e atualiza o valor do proximo
    for (int i = 1; i <= n; i++){
        printf("%.3f ", pg);
        pg = pg * razao;
    }
    return 0;

}