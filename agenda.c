/*Programa que simula o funcionamento de uma Agenda



Autor: João Rissi Magnani (2023)                 */

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    int segundo;
    char nome[80];
} Evento;

void preenche_agenda(Evento  *x, int n);      // Função que irá preencher a agenda

int main(){
    int n;
    Evento *agenda;
    scanf(" %d", &n);                       // quantos eventos diferentes deseja preencher
    agenda=(Evento*)malloc(sizeof(Evento)*n);    // alocar o espaço para o número de eventos desejados
    preenche_agenda(agenda,n);
    for (int i=0; i<n; i++){
        printf("%02d/%02d/%02d - %02d:%02d:%02d\n%s\n", agenda[i].dia,  agenda[i].mes, agenda[i].ano,  agenda[i].hora,  agenda[i].minuto,  agenda[i].segundo,  agenda[i].nome);

    }
    free(agenda);                         // desalocar o espaço ocupado
    return 0;
}

void preenche_agenda(Evento  *x, int n){
    for (int i=0; i<n; i++){             // para cada evento diferente, há um novo preenchimento dos dados
        scanf(" %d %d %d %d %d %d %[^\n]s", &x[i].dia, &x[i].mes, &x[i].ano, &x[i].hora, &x[i].minuto, &x[i].segundo, x[i].nome);

    }
}