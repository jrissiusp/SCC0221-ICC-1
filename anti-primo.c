/*Programa que le um numero N que determina quantos valores serao inseridos
e, apos isso, verifica se esse numero apresenta mais divisores do que qualquer outro 
numero inteiro menor que ele

Autor: Joao Rissi Magnani (2023)*/

#include <stdio.h>
int main(){
    int N, num, divisores, contador;
    scanf("%d", &N); // quantos numeros serão inseridos.
    
    for (int i = 1; i<=N; i++){
        contador = 0;
        divisores = 0;
        scanf("%d", &num); //numero inserido
        
        for (int j = 1; j<=num; j++){     // for que conta quantos divisores esse numero possui 
            if (num %j == 0){
                divisores++;
            }
        }
        for (int k = num - 1; k>=1; k--){     // for que percorre todos numeros menores do que  o numero inserido ate 1
            contador=0;                       
            for (int b=1; b<=k; b++){         // verifica quantos divisores possui cada numero
                if(k % b == 0){
                    contador++;
                }
            }
            if (contador >= divisores){       // se possuir mais divisores do que o numero inserido, entao nao eh um anti-primo
                printf("NAO\n");
                break;
            }
        }
        if (divisores>contador){            // caso ele seja um anti primo
            printf("SIM\n");
        }
        }
    return 0;
    }
