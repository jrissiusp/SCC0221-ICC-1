/*Programa que lê um valor N que determina quantos valores serão inseridos
e, após isso, verifica se esse numero apresenta mais divisores do que qualquer outro 
numero inteiro menor que ele*/

#include <stdio.h>
int main(){
    int N, num, divisores, contador;
    scanf("%d", &N); // quantos numeros serão inseridos.
    
    for (int i = 1; i<=N; i++){
        contador = 0;
        divisores = 0;
        scanf("%d", &num); //numero inserido
        
        for (int j = 1; j<=num; j++){
            if (num %j == 0){
                divisores++;
            }
        }
        for (int k = num - 1; k>=1; k--){
            contador=0;
            for (int b=1; b<=k; b++){
                if(k % b == 0){
                    contador++;
                }
            }
            if (contador >= divisores){
                printf("NAO\n");
                break;
            }
        }
        if (divisores>contador){
            printf("SIM\n");
        }
        }
    return 0;
    }
