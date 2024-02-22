/*Programa que realiza um mapeamento de lugares
disponiveis e indisponiveis para se sentar.
Nao pode sentar nas linhas e nem nas colunas que 
apresentam um 'c'                             */

// Biblioteca utilizada
#include<stdio.h>

// Prototipos das funcoes
void lugares(char matriz[20][20], int linhas, int colunas);
void lugares_disp(char matriz[20][20], int linhas, int colunas);
void print_lugares(char matriz[20][20], int linhas, int colunas);

// Inicio da main
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    char lugar[20][20];
    lugares(lugar, n, m);
    lugares_disp(lugar, n, m);
    print_lugares(lugar, n, m);

}

// Preenche os lugares
void lugares(char matriz[20][20], int linhas, int colunas){
    // Preenche de acordo com o tamanho da matriz
    for (int i = 0; i<linhas; i++){
        for (int j = 0; j < colunas; j++){
            scanf(" %c", &matriz[i][j]);
        }
    }
}

// Verifica quais lugares estao disponiveis
void lugares_disp(char matriz[20][20], int linhas, int colunas){
    // Repeticao que ira passar por todas as linhas
    for (int i = 0; i < linhas; i++){
        // Repeticao que ira passar por todas as colunas
        for (int j = 0; j < colunas; j++){
            // Caso seja 'c', o lugar esta indisponivel, por isso o 'x'
            if(matriz[i][j] == 'c'){
                matriz[i][j] = 'x';
                // Repeticao que ira percorrer a linha de onde foi encontrado o 'c'
                for(int a = 0; a< linhas ; a++){
                    // Se nao for um 'c', marca o 'x' demonstrando que esta indisponivel.
                    // Nao deve marcar os lugares que tem 'c' com 'x' porque esses ainda nao foram
                    // analisados pelas estruturas de repeticao anteriores, o que poderia fazer que
                    // lugares indisponiveis se tornassem disponiveis.
                    if(matriz [a][j] != 'c'){
                        matriz[a][j] = 'x';
                    }
                }
                // Repeticao que percorre a coluna de onde foi encontrado o 'c'
                for (int b = 0; b < colunas; b++){
                    // Logica eh a mesma do que a estrutura acima
                    if (matriz[i][b]!='c'){
                        matriz[i][b]= 'x';
                    }
                }
            }
            // 'f' sao lugares indisponiveis e que nao foram detectados anteriormente
            else if(matriz[i][j]=='f'){
                matriz[i][j]='x';
            }
            // Por fim, 'v' sao os lugares disponiveis, que serao marcados com 'o'
            else if(matriz[i][j]=='v'){
                matriz[i][j]= 'o';
            }
            // Tudo isso se repete ate que todos elementos sejam percorridos
            else{
                continue;
            }
        }
    }
}

// Printa os lugares apos a analise completa
void print_lugares(char matriz[20][20], int linhas, int colunas){
    // Variavel auxiliar
    int aux=0;
    // For que verifica quantos lugares estao indisponiveis
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j<colunas; j++){
            if (matriz[i][j] == 'x'){
                aux++;
            }
        }
    }
    // Caso nao tenha nenhum lugar disponivel
    if (aux == (linhas * colunas)){
        printf("Eh um dia triste para os mono Yasuo");
    }
    // Caso haja lugares disponiveis, printa a distribuicao dos lugares
    else{
    for (int i = 0; i<linhas; i++){
        for (int j =0; j<colunas; j++){
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
    }
}
