/*  Programa que calcula diferente cenarios
de uma corrida de kart

Autor: Joao Rissi Magnani (2023) */

// Biblioteca utilizada
#include <stdio.h>

// Inicio da main
int main()
{
    // Variaveis utilizadas
    float va, vb, dist; 
    int tempo, N;
    // Leitura da quantidade de corridas diferentes
    scanf("%d", &N);
    // A cada repeticao, eh uma corrida diferente
    for(int i=1; i<=N; i++)
    {
        // Leitura das velocidades dos pilotos e tempo de corrida
        scanf("%f %f %d", &va, &vb, &tempo);
        // Cada if trata de uma possibilidade pedida no enunciado do exercicio
        if (tempo==0)
        {
            printf("A corrida ainda nao comecou\n");
        }
        else
        {
            if (va==vb && vb==0)
            {
                printf("Os dois pilotos nao querem competir\n");
            }
            else
            {
                if (va==0)
                {
                    printf("O piloto A desistiu inesperadamente\n");
                }
                if(vb==0)
                {
                    printf("O piloto B desistiu inesperadamente\n");
                }
                if(tempo>0)
                {
                    if(va>vb && vb!=0)
                    {
                        // Calculo da diferenca das distancias percorridas
                        dist = (va*tempo) - (vb*tempo);
                        printf("O kart A venceu e percorreu %.2fkm a mais que o kart B\n", dist);
                    }
                    if(va==vb && vb!=0)
                    {
                        dist=va*tempo;
                        printf("Os karts empataram, percorrendo cada %.2fkm\n", dist);
                    }
                    if(vb>va && va!=0)
                    {
                        dist= (vb*tempo)-(va*tempo);
                        printf("O kart B venceu e percorreu %.2fkm a mais que o kart A\n", dist);
                    }
                    
                }
                if(tempo<0 && vb!=0 && va!=0)
                {
                    printf("De alguma forma os pilotos voltaram no tempo\n");
                }
            }
        }
    }


    return 0;
}