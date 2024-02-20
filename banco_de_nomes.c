/*Programa que lÊ um banco de nomes



Autor: João Rissi Magnani (2023)  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastro(char **banco);
void consulta(char ***banco, int *quant);

int main(void){

	char **banco;
	int quant, consult;
	
	scanf("%d", &quant);
	banco = (char**) malloc(sizeof(char*)*quant);
  	
  for(int i = 0; i < quant; i++){
    cadastro(&banco[i]);
  }
  
  scanf("%d", &consult);
  for(int i = 0; i < consult; i++){
    consulta(&banco, &quant);
  }

  for(int i = 0; i < quant; i++){
    printf("%s\n", banco[i]);
  }

  for(int i=0; i<quant; i++){
    free(banco[i]);
  }
  free(banco);

return 0;
}

void cadastro(char **banco){

  	char carac;
    int aux = 0;
  
  	*banco = (char*) malloc(sizeof(char)*20);

  		do{
        
  			scanf("%c", &carac);
            if (carac != '#' && carac != '\n' && carac !='\r' ) {
                if (((aux % 20) == 0) && ((aux / 20) >= 1)){
                    *banco= (char*) realloc(*banco, (sizeof(char) * aux) + 21);
                }

            (*banco)[aux] = carac;
            aux++;
            }
        
  		}while(carac != '#');
        
        (*banco)[aux]='\0';
        return;
}


void consulta(char ***banco, int *quant) {
    char carac, *nomeconsult;
    int aux = 0;

    nomeconsult = (char*) malloc(sizeof(char) * 20);

    do {
        scanf("%c", &carac);
        if (carac != '#' && carac != '\n' && carac !='\r' ){
            if (((aux % 20) == 0) && ((aux / 20) >= 1)) {
                nomeconsult = (char*) realloc(nomeconsult, (sizeof(char) * aux) + 21);
            }

        nomeconsult[aux] = carac;
        aux++;
        }
        
    } while (carac != '#');

    nomeconsult[aux]='\0';

    for (int i = 0; i < (*quant); i++) {
        if (strcmp(nomeconsult, (*banco)[i]) == 0) {
            // O nome já existe no banco de dados, então não é necessário adicionar novamente.
            free(nomeconsult);
            return;
        }
    }

    (*quant)++;
    *banco = (char**) realloc(*banco, (sizeof(char*) * (*quant)));
    (*banco)[(*quant) - 1] = (char*) malloc((strlen(nomeconsult) + 1) * sizeof(char));
    strcpy((*banco)[(*quant) - 1], nomeconsult);

    free(nomeconsult);
}

