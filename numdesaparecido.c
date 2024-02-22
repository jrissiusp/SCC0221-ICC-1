/* Programa que identifica qual numero
esta faltando em uma sequencia. 

Autor: Joao Rissi Magnani (2023)     */

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main() {
    // Quantidade de termos da sequencia
    int N;
    // Leitura da quantidade
    scanf("%d", &N);
    // Declaracao da nossa sequencia
    int lista[N - 1]; 
    // Podemos tratar a sequencia como se fosse uma pa de 
    // razao 1. O valor da soma total da pa caso nao houvesse
    // nenhum numero faltando seria:
    int somaTotal = (N * (N + 1)) / 2;

    // Toda sequencia eh preenchida ate encontrar o valor faltante,
    // que eh o resultado final das subtracoes
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &lista[i]);
        somaTotal -= lista[i]; 
    }
    // Printa o valor desaparecido
    printf("Numero desaparecido: %d\n", somaTotal);

    return 0;
}
