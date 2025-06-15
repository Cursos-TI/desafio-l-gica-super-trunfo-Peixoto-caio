#include <stdio.h>

int main() {
    
    // Movimento da torre no xadrez 5 casas para a direita com utilização do loop for
    printf("Movimento da torre no xadrez:\n");
    for (int i = 0; i <= 5; i++) {
        printf("Direita\n", i);
    }

    // Movimento do bispo no xadrez 5 casas para a diagonal direita com utilização do loop while
    printf("Movimento do bispo no xadrez:\n");
    int mov_bispo = 0;
    while (mov_bispo <= 5) {
        printf("Diagonal direita\n");
        mov_bispo++;
    }

    // movimento da rainha no xadrez 8 casas para a esquerda com a utilização do loop do-while
    printf("Movimento da rainha no xadrez:\n");
    int mov_rainha = 0;
    do {
        printf("Esquerda\n");
        mov_rainha++;
    } while (mov_rainha < 8); // neste momento utiliza-se o operador de comparação menor que (<) para o loop do-while e não o operador de comparação menor ou igual a (<=) como nos outros loops
   
    // Movimento do cavalo no xadrez 2 casas para baixo e uma a esquerda com a utilização de loop aninhado while e for
    printf("Movimento do cavalo no xadrez:\n");
    int mov_cavalo = 1;
    while (mov_cavalo) { // loop while externo para controlar o movimento do cavalo
        for (int i = 0; i < 2; i++) { // loop for interno para mover duas casas para baixo
            printf("Baixo\n");
        }
        mov_cavalo--; // decrementa mov_cavalo para sair do loop while
        printf("Esquerda\n"); // movimento do cavalo para a esquerda como execução do loop while
    }

    // Substituir os loops simples que contralam o moviemnto da torre, bispo e raiha por funções recusrivas
    printf("Movimento da torre, bispo e rainha utilizando funções recursivas:\n");
    void movimento_torre(int casas) {
        if (casas > 0) {
            printf("Direita\n");
            movimento_torre(casas - 1);
        }
    }
    void movimento_bispo(int casas) {
        if (casas > 0) {
            printf("Diagonal direita\n");
            movimento_bispo(casas - 1);
        }
    }
    void movimento_rainha(int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            movimento_rainha(casas - 1);
        }
    }
    movimento_torre(5); // chama a função para mover a torre 5 casas para a direita
    movimento_bispo(5); // chama a função para mover o bispo 5 casas para a diagonal direita
    movimento_rainha(8); // chama a função para mover a rainha 8 casas para a esquerda

    // Substituir o loop aninhado que controla o movimento do cavalo por um loop aninhado com múltiplas variáveis e múltiplsa confições
    printf("Movimento do cavalo no xadrez com múltiplas variáveis e condições:\n");
    int casas_baixo = 2; // número de casas para baixo
    int casas_esquerda = 1; // número de casas para a esquerda
    for (int i = 0; i < casas_baixo; i++) {
        printf("Baixo\n");
    }
    for (int i = 0; i < casas_esquerda; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
