/*Programa que verifica se uma palavra
invasora está presente na string e 
quantas vezes essa palavra aparece

Autor: João Rissi Magnani (2023)   */

// Bibliotecas utilizadas
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

// Prototipos das funcoes
void remove_palavra(char * frase, char * palavra, char*aux);
void string_minuscula(char* string);

// Inicio da main
int main (void)
{
  // Variaveis que serao utilizadas para comparacao
  char pal_invasora[21],*string, *aux, carac;
  int ocorrencias=0, indice = 1;
  // Leitura da palavra invasora
  scanf(" %s", pal_invasora);
  // Leitura do primeiro caracter da string auxiliar
  scanf(" %c", &carac);
  
  // Inicio da alocacao para a string auxiliar
  aux = (char*)malloc(sizeof(char));  
  aux[0] = carac;
  // Sera utilizada para verificar se tem palavra invasora
  char *retorno;
  // Leitura caracter a caracter para preencher a string
  while((scanf("%c", &carac))!=EOF){
    indice++;
    // Realoca a cada interacao
    aux=(char*)realloc(aux, sizeof(char)*indice);
    aux[indice-1]=carac;
  }
  aux[indice]='\0';
  // Aloca o tamanho necessario com base na string auxiliar
  string=(char*)malloc(sizeof(char)*indice);
  // Copia para nossa string que sera utilizada
  strcpy(string,aux);
  // Verficacao se ha palavra invasora, se nao encontrar, retorna NULL
  // e, caso encontre, retorna a string a partir da primeira ocorrencia da palavra
  retorno = strstr(string, pal_invasora);
  // Caso nao encontre palavra invasora
  if (retorno == NULL ){
    printf("A palavra invasora nao foi encontrada");
  }
  // Caso encontre
  else{
    // Enquanto a palavra ainda estiver na frase, o precesso de remocao continua
      while (retorno != NULL){
      remove_palavra(aux, pal_invasora, string);
      // Atualiza a posicao para uma nova verificacao
      retorno+=1;
      // Busca nova ocorrencia
      retorno = strstr(retorno, pal_invasora);
      // Atualiza o numero de ocorrencias
      ocorrencias++;
    }
  }   
  // Imprime o numero de ocorrencias e a string sem as palavras
  printf("[Palavras invasoras: %d]\n", ocorrencias);
  printf("%s ", string); 
  // Desalocacao da memoria alocada
  free(aux);
  free(string);
  free(retorno);
  return(0);
}

// Converter todas letras da string para minuscula para realizar a comparacao
void string_minuscula(char* string){
  // Percorrer a string 
    for (int i=0; i<strlen(string);i++){
      // Caso seja uma letra maiuscula, eh realizado a conversao
        switch(string[i]){
            case 65 ... 90: string[i]+=32; 
            default: continue;
        }
    }
}

// Remove as palavras invasoras
void remove_palavra(char * frase, char * palavra, char*aux)
{
    
    int tamanhoPalavra = strlen(palavra);

    // transformam as strings em letras minusculas para realizar a comparação
    string_minuscula(frase);
    string_minuscula(palavra);

    // Ponteiro para o inicio da palavra 
    char * ponteiro = strstr(frase, palavra), *pontaux=aux;
    if(ponteiro)
    {
        // Posicao da palavra na frase original
        int posicao = (ponteiro - frase);
        
        // Atualiza a posicao inicial da string para depois da palavra invasora
        pontaux+=posicao;

        // Incrementamos o ponteiro para ir para o fim da palavra procurada
        ponteiro = ponteiro + tamanhoPalavra;   
        pontaux+= tamanhoPalavra;             
        
        // Percorremos a frase e copiamos caracter a caracter a partir
        // do fim da palavra para a posicao antigamente ocupada pela palavra em diante
        int i;
        for(i = 0; i < strlen(ponteiro); i++){
            frase[posicao + i] = ponteiro[i];
            aux[posicao + i] =pontaux[i];  
        }    

        // A frase agora tem que terminar mais cedo                
        frase[posicao + i] = 0;      
    }   
}