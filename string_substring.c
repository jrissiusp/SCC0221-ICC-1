/*Verifica se uma substring está 
presente em uma outra string e 
imprime a posicao encontrada

Autor: João Rissi Magnani (2023)*/

// Bibliotecas utilizadas
#include <stdio.h>
#include <string.h>

// Inicio da main
int main (void)
{
  // Variaveis de comparacao
  char string[1000], substring[1000];

  // Posicao encontrada na string
  int posicaoo;

  // Leitura da string
  scanf("%[^\n]", string);
  
  // Limpar o buffer 
  scanf("%c", substring);

  // Leitura da substring
  scanf("%[^\n]", substring);

  // Ponteiros utilizados para encontrar as substrings na
  // string original
  char *posicao,*retorno;

  // Apontar para o inicio da string
  posicao = string;

  // Encontrar a posicao da string que encontra a substring
  retorno = strstr(string, substring);

  // Caso nao encontre a substring
  if (retorno == NULL ){
    printf("A sub string nao foi encontrada");
  }

  // Caso encontre
  else{
      // Enquanto estiver encontrando a substring
      while (retorno != NULL){

      // Posicao na string eh calculada atraves da subtracao do
      // endereco encontrado pelo endereco inicial da string
      posicaoo = retorno - posicao;
      
      // Imprime a posicao encontrada
      printf("A sub string foi encontrada na posicao = %d\n", posicaoo);

      // Atualiza "retorno" para a proxima posicao na string
      // para verificar se as strings se encontram novamente
      retorno+=1;

      // Verificacao se encontra ou nao
      retorno = strstr(retorno, substring);
    }
  }    
  return(0);
}