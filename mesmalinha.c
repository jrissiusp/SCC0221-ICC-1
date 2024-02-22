/* programa em C que, dada uma string informada pelo usuario, verifica se ela pode
ser escrita usando apenas as letras de uma linha do teclado, em caso positivo, seu programa deve
imprimi-la.*/


// Bibliotecas utilizadas
#include <stdio.h>
#include <string.h>
#include<stdbool.h>

// Prototipo da funcao
bool esta_nalinha(char *palavra, char *linha);

// Inicio da main
int main(){
    // Variavel que recebera a palavra e as linhas dos teclados
    char palavra[100];
    char *linha1= "qwertyuiopQWERTYUIOP";
    char *linha2= "asdfghjklASDFGHJKL";
    char *linha3= "zxcvbnmZXCVBNM";
    
    // Percorre todas as palavras ate o fim
    while(scanf("%s", palavra)!= EOF){
        // Ira verificar a linha 1, se nao estiver vai para linha 2 e, por fim, se nao encontrar na linha 2 procura na linha 3.
        // Caso nao encontre em nenhuma linha, a palavra nao eh printada
        if(esta_nalinha(palavra, linha1)){
            printf("%s\n", palavra);
            continue;
        }
        else{
            if(esta_nalinha(palavra, linha2)){
                printf("%s\n", palavra);
                continue;
            }
            else if(esta_nalinha(palavra, linha3)){
                printf("%s\n", palavra);
                continue;
            }
        }
    }
    return 0;
}

// Funcao que verifica se eh possivel ou nao
bool esta_nalinha(char *palavra, char *linha){
    // Variaveis de parametro
    int tam = strlen(linha);
    int tam_p = strlen(palavra);
    int verificador=0;

    // Estrutura de repeticao que percorre todas as letras de uma palavra
    for (int i =0; i<tam_p; i++){
        // estrutura que passa por todas as letras que estao em uma mesma linha
        for (int j=0; j<tam; j++){
            // Caso encontre, pula para a proxima letra da palavra
            if (palavra [i] == linha[j]){
                verificador++;
                break;
            }
        }
    }
    // Caso todas as letras estejam na mesma linha
    if(verificador==tam_p){
        return true;
    }
    // Caso nao esteja
    else{
        return false;
    }
}