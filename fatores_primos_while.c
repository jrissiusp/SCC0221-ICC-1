/* Programa que le um numero realiza
a decomposicao em fatores primos.
Imprime os fatores primos e suas multiplicidades

Autor: Joao Rissi Magnani (2023)*/
 
// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // "numero" recebe o numero a ser decomposto e "mult" representa a multiplicidade de cada fator
    // e "fator" eh o proprio faotr
    int numero, fator=2, mult=0;
    // Leitura do numero
    scanf("%d", &numero);
    // Enquanto ainda puder realizar divisoes, cada repeticao atualiza o fator em questao
    while(numero > 1 )
    {
        mult=0;
        // Caso encontre um divisor, entra nessa estrutura, que atualiza o valor apos a divisao
        // e calcula a multiplicidade de cada fator
        while (numero % fator ==0)
        {
            mult++;
            numero= numero / fator;
        }
        // Impressao de um fator caso encontrado
        if (mult != 0) 
        {
          printf("%d %d\n", fator, mult); 
        }
      // Incrementa o valor do fator 
      fator++; 

    }
     
    


    return 0;
}