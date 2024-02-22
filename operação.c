/* Programa que funciona como uma 
mini calculadora de operacoes basicas

Auotr: Joao Rissi Magnani (2023)   */

// Biblioteca utilizada
#include<stdio.h> 

// Inicio da main
int main()
{
    // Variaveis que serao os valores das operacoes
    float resultado, a, b;
    // Indica qual operacao sera realizada
    char sinal;
    // Leitura dos dados
    scanf("%f %f %c", &a, &b, &sinal);
    // Identificando a operacao e realizando as contas
    switch (sinal){
        case '+': resultado = a+b; printf("%f", resultado); break;
        case '-': resultado = a-b; printf("%f", resultado); break;
        case '*': resultado = a*b; printf("%f", resultado); break;
        case '/': resultado = a/b; printf("%f", resultado); break;
        default: printf("nenhuma operacao foi selcionada"); break;
    }
    return 0;
}