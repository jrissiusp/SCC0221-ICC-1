/*Programa que calcula as raizes de 
uma equacao do segundo grau

Autor: Joao Rissi Magnani (2023)  */

// Bibliotecas utilizadas
#include<stdio.h>
#include<math.h>

// Inicio da main
int main()
{
    // Variaveis de apoio utilizadas
    float a, b, c, x, x_, delta; 

    // Leitura dos valores que acompanham, respectivamente, x^2, x e o termo independente
    scanf("%f %f %f", &a, &b, &c);
    // Calculo do delta (baskhara)
    delta = sqrt(pow(b,2) - 4*a*c);
    // Duas raizes reais
    if (delta > 0)
    {
        // Calculos das raizes
        x_= (-b - delta)/ (2*a);
        x= (-b + delta)/ (2*a);
        // Imprime em ordem do menor para o maior
        if(x_<x)
        {
        printf("%.3f %.3f", x_, x);
    
        }
        else
        {
            printf("%.3f %.3f", x, x_);
        } 
    }      
    // Uma raiz real com multiplicidade dupla
    else if (delta == 0)
    {
        // Calculo da raiz
        x=x_= (-b + delta)/ (2*a);
        printf("%.3f", x);
    }
    // Delta < 0 => nao existe raiz real
    else
        {
            printf("NAO EXISTE RAIZ REAL");
        }
    
return 0;
}