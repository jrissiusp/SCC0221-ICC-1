/*Programa que le um banco de nomes
e realiza as devidas alteracoes


Autor: João Rissi Magnani (2023)  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cadastro(char **banco);                   // cadastra os nomes no banco
void consulta(char ***banco, int *quant);      // consulta se um nome esta no banco de dados e, se nao estiver,
                                               // adiciona o nome

int main(void){

	char **banco;                              // matriz dos nomes
	int quant, consult;
	
	scanf("%d", &quant);                      // quantidade de nomes que serao adicionados
	banco = (char**) malloc(sizeof(char*)*quant);  // aloca o devido espaco
  	
  for(int i = 0; i < quant; i++){           // cadastra os nomes
    cadastro(&banco[i]);
  }
  
  scanf("%d", &consult);                    // quantidade de nomes a realizar a consulta
  for(int i = 0; i < consult; i++){         // consulta os nomes
    consulta(&banco, &quant);
  }

  for(int i = 0; i < quant; i++){           // printa os nomes do banco
    printf("%s\n", banco[i]);
  }

  for(int i=0; i<quant; i++){             // libera o espaco ocupado por cada string
    free(banco[i]);
  }
  free(banco);                            // libera o espaco ocupado pela matriz

return 0;
}

void cadastro(char **banco){

  	char carac;
    int aux = 0;
  
  	*banco = (char*) malloc(sizeof(char)*20);        // aloca um tamanho inicial para o nome

  		do{
        
  			scanf("%c", &carac);                        // escreve letra por letra do nome
            if (carac != '#' && carac != '\n' && carac !='\r' ) {  // condicoes de saida
                if (((aux % 20) == 0) && ((aux / 20) >= 1)){       // caso ultrapasse o limite inicial de 20 caracteres
                    *banco= (char*) realloc(*banco, (sizeof(char) * aux) + 21);
                }

            (*banco)[aux] = carac;  //  posicao que a letra ocupara
            aux++;                  // atualiza a posicao
            }
        
  		}while(carac != '#');   // condicao de saida
        
        (*banco)[aux]='\0';    // ultimo caracter da string
        return;
}


void consulta(char ***banco, int *quant) {
    char carac, *nomeconsult;
    int aux = 0;

    nomeconsult = (char*) malloc(sizeof(char) * 20);   // nome a ser consultado

    do {                                              // segue a mesma linha de raciocinio da funcao acima
        scanf("%c", &carac);
        if (carac != '#' && carac != '\n' && carac !='\r' ){
            if (((aux % 20) == 0) && ((aux / 20) >= 1)) {
                nomeconsult = (char*) realloc(nomeconsult, (sizeof(char) * aux) + 21);
            }

        nomeconsult[aux] = carac;
        aux++;
        }
        
    } while (carac != '#');

    nomeconsult[aux]='\0';       // ultima posicao da string

    for (int i = 0; i < (*quant); i++) {        // compara o nome inserido com os nomes ja cadastrados
        if (strcmp(nomeconsult, (*banco)[i]) == 0) {
            // O nome já existe no banco de dados, então não é necessário adicionar novamente.
            free(nomeconsult);
            return;
        }
    }
    
    // caso o nome nao esteja no banco de dados, o programa seguira esses passos

    (*quant)++;     // atualiza a quantidade de nomes
    *banco = (char**) realloc(*banco, (sizeof(char*) * (*quant)));    //realoca o tamanho atualizado
    (*banco)[(*quant) - 1] = (char*) malloc((strlen(nomeconsult) + 1) * sizeof(char)); // aloca o tamanho do nome a ser inserido
    strcpy((*banco)[(*quant) - 1], nomeconsult); // passa o novo nome para o banco de dados

    free(nomeconsult); // libera o espaco ocupado pelo nome inserido na string auxiliar
}

