/*Programa que recebera n numeros e verifica
se os numeros inseridos sao primos. Caso nao seja, 
imprime o proximo numero que seja primo

Autor: Joao Rissi Magnani (2023)                */

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main() {

    // "n" recbe numero de entradas, "numero" os valores a serem analisados,
    // "resultado" parametro pra verificar se eh primo, "proximo" recebe
    // o prox primo
    int n, numero, resultado=0, proximo;

    // Leitura de "n"
    scanf("%d", &n);

    // Calculos para cada numero inserido
    for (int i=1 ; i<=n; i++){

        // Leitura do numero
        scanf("%d", &numero);

        // Verifica se eh primo
        for( int i = 2; i<numero; i++){
        
        // Caso encontre um divisor, interrompe a repeticao
        if (numero%i==0){
            resultado++;
            break;
        }
        }

        // Caso seja primo
        if (resultado==0){
            printf("%d eh primo.\n", numero);
        }

        // Caso nao seja primo
        else{
            // Atualiza o valor do numero
            proximo = numero + 1;
            
            // Loop infinito que eh encerrado ao achar um numero primo
            for( int k = 2; i>0; k++){
            
            // Flag usado para verificacao se eh primo
            resultado = 0;    
            // Caso encontre um divisor, ou o divisor seja maior/igual que o dividendo
            if (proximo%k==0 && proximo >k ){
                // Flag atualizado (numero em questao nao eh primo)
                resultado++;
                // "k" volta a ser 2 para realizar as divisoes
                k=2;
                // Incrementa o valor do numero para verificar se eh primo
                proximo++;
                // Repete a estrutura 
                continue;
            }
            // Caso seja primo 
            if (k==proximo && resultado == 0){
                printf("%d nao eh primo, o proximo primo eh %d.\n", numero, proximo);
                break;
            }
            }
            
        }

        // Atualiza os valores para uma proxima repeticao
        resultado = 0;
        proximo =0;
    }

    return 0;
}