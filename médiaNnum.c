/* Programa que calcula a media entre
n numeros

Autor: Joao Rissi Magnani (2023)   */

// Biblioteca utilizada
#include<stdio.h>

// Biblioteca
int main()
{
    // Variaveis utilizadas
    int n;
    float  entrada=0, num=0, media;
    // Leitura de quantas entradas receberemos
    scanf("%d", &n );
    // Lendo e atualizando o valor da soma total
    for (int i=1; i<=n; i++)
    {
        scanf("%d", &entrada);
        num= num + entrada;
    }
    // Realizando a media
    media = num / n;

    // Printando o resultado
    printf("%f", media);

    return 0;
}
