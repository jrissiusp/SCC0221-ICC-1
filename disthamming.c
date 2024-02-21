/*A distancia de Hamming entre duas strings 
de mesmo comprimento eh o numero de posicoes 
nas quais elas diferem entre si. O mesmo raciocinio
segue para numeros.

Autor: Joao Rissi Magnani (2023)                 */

// Biblioteca utilizada
#include <stdio.h>

// Prototipo da funcao
int hammingDistance(int x, int y);


int main() {
    //Variaveis utilizadas
    int x, y;
    // Leitura das variaveis
    scanf(" %d %d", &x, &y);
    // Recebera a distancia de hamming
    int distance = hammingDistance(x, y);
    printf("%d\n", distance);

    return 0;
}

// Funcao que calcula a distancia de hamming
int hammingDistance(int x, int y) {
    // Realiza um "XOR" (ou exclusivo) entre as strings
    int xorResult = x ^ y;
    // Variavel que ira receber a distancia
    int distance = 0;
    // Percorre os valores de xorResult, quando os numeros sao diferentes, pelo menos uma vez esse valor sera diferente de 0
    while (xorResult > 0) {
        // Verifica o bit menos significativo de xorResult e, se for igual, entra no if
        if (xorResult & 1) {
            distance++;
        }
        xorResult >>= 1;
    }

    return distance;
}
