#include <stdio.h>
#define linhas 10
#define colunas 10
#define linha1 10
// Definindo constantes para o tamanho do tabuleiro e das linhas

int main() {
    int i, j;

    // Letras para identificar as linhas
    char vetor[linha1] = {'A','B','C','D','E','F','G','H','I','J'};

    // Tabuleiro 10x10 inicializado com '0'
    char tabuleiro[linhas][colunas];
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            tabuleiro[i][j] = '0'; // Preenche o tabuleiro com '0'
        }
    }

    // Preenchendo a matriz habilidade1 com '5' formando um cone invertido
    char habilidade1[7][7] = {0}; // Cone invertido
    for (int i = 0; i < 4; i++) {
       for (int j = i; j < 7 - i; j++) {
        habilidade1[i][j] = '5';
    }
}
    habilidade1[4][2] = '3'; // Base do cone invertido
    habilidade1[3][3] = '3'; // Centro do cone invertido
    
    // Preenchendo a matriz habilidade2 com '5' formando uma cruz
    char habilidade2[7][7] = {0}; // Cruz
    for (int i = 0; i < 7; i++) {
    habilidade2[3][i] = '5'; // Linha central horizontal
    habilidade2[i][3] = '5'; // Coluna central vertical
}

    habilidade2[3][2] = '3'; // Centro da cruz
    habilidade2[2][5] = '3'; // C5
   
    // Preenchendo a matriz habilidade3 com '5' formando um octaedro
    char habilidade3[9][9] = {0}; // Octaedro (representação em losango 2D)

    int centro = 4;
    for (int i = 0; i < 5; i++) {
        for (int j = centro - i; j <= centro + i; j++) {
            habilidade3[i][j] = '5';
    }
}
    for (int i = 5; i < 9; i++) {
        int i_refletido = 8 - i;
            for (int j = centro - i_refletido; j <= centro + i_refletido; j++) {
                habilidade3[i][j] = '5';
    }
}
    habilidade3[0][4] = '3'; // no topo do octaedro
    habilidade3[8][4] = '3'; // na base do octaedro

    // Adiciona o número '3' nas coordenadas especificadas
    //tabuleiro[1][3] = '3'; // B4
    tabuleiro[1][4] = '3'; // B5
    tabuleiro[1][5] = '3'; // B6
    //tabuleiro[3][0] = '3'; // D1
    //tabuleiro[4][0] = '3'; // E13
    // tabuleiro[5][0] = '3'; // F1
    tabuleiro[3][5] = '3'; // D6
    tabuleiro[2][4] = '3'; // C5
    // tabuleiro[4][6] = '3'; // E7
    
    // Cabeçalho com números das colunas
    printf("   "); 
    for (j = 0; j < colunas; j++) { 
        printf("%2d ", j+1); 
    }
    printf("\n"); // Pula para a próxima linha após imprimir os números das colunas

    // Impressão das linhas do tabuleiro
    for (i = 0; i < linhas; i++) { 
        printf("%c  ", vetor[i]); 
        for (j = 0; j < colunas; j++) { 
            printf(" %c ", tabuleiro[i][j]); 
        }
        printf("\n");
    }

    //imprimindo a matriz habilidade1
    printf("\nHabilidade 1 (Cone Invertido):\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%c ", habilidade1[i][j] ? habilidade1[i][j] : '0');
        }
        printf("\n");
    }

    //imprimindo a matriz habilidade2
    printf("\nHabilidade 2 (Cruz):\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%c ", habilidade2[i][j] ? habilidade2[i][j] : '0');
        }
        printf("\n");
    }

    //imprimindo a matriz habilidade3
    printf("\nHabilidade 3 (Octaedro):\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%c ", habilidade3[i][j] ? habilidade3[i][j] : '0');
        }
        printf("\n");
    }

    return 0;
}
