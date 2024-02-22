/* Programa que utiliza operacoes
da biblioteca math apenas para  
teste de funcionamento*/


// Bibliotecas utilizadas
#include <stdio.h>
#include <math.h>

// Inicio da main
int main()
{
    // Variaveis para contas e para armazenar resultado
    double n1, resultadop, resultados;
    // Leitura do valor inicial
    scanf("%lf", &n1);
    printf("Numero: %.0f\n", n1);
    // Obtendo e imprimindo o resultado operacao de potencia
    resultadop = pow(n1, 10);
    printf("         %.2e\n", resultadop);
    // Obtendo e imprimindo o resultado operacao de raiz quadrada
    resultados= sqrt(n1);
    printf("         %.2lf", resultados);
    return 0;
}

