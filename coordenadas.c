/*Programa que identifica em 
qual quadrante do ponto cartesiano
um ponto se encontra

Autor: Joao Rissi Magnani (2023) */

// Biblioteca utilizada
#include<stdio.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas
    float x,y;
    // Leitura dos valores das variaveis 
    scanf("%f %f", &x, &y);
    // Ponto (0;0)
    if (x==0 || y==0 )
    {
        printf("o ponto está no eixo, em nenhum quadrante especifico");   
    }
    else
    {
        // Primeiro ou quarto quadrante
        if(x>0)
        {
            if(y>0)
            { 
                printf("1o quadrante");
            }
            else
            {
                printf("4o quadrante");
            }
        }
        // Segundo ou terceiro quadrante
        else
        {
            if(y>0)
            {
                printf("2o quadrante");
            }
            else{
                printf("3o quadrante");
            }
        }

    }

    return 0;
}