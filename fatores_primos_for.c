/* Programa que le um numero realiza
a decomposicao em fatores primos.
Imprime os fatores primos e suas multiplicidades

Autor: Joao Rissi Magnani (2023)*/
 
// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // "num" recebe o numero a ser decomposto e "mult" representa a multiplicidade de cada fator
    int num, mult;
    // Leitura do numero
    scanf("%d", &num);
    // Repeticao que passa por todos os numeros ate o numero que esta sendo analisado
    for(int i=2; i<=num;)
    {   
        mult=0;
        // Caso encontre um divisor, repete essa estrutura para atualizar
        // o valor apos a divisao e calcular a multiplicidade desse divisor
        while(num%i == 0){
            mult++;
            num = num / i;

        }
        // Imprime um fator primo encontrado e sua multiplicidade
        if (mult>0){
            printf("%d %d\n",  i, mult);
        }
        i++;  
    }
        
    return 0;
}