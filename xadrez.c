#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Constantes para o número de casas a serem movidas por cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // ==============================
    // Movimentação da Torre (FOR)
    // ==============================
    // A Torre se move em linha reta, na horizontal ou vertical.
    // Aqui simulamos o movimento da Torre 5 casas para a direita.

    printf("=== Início do Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("=== Fim do Movimento da Torre ===\n\n");

    // ==============================
    // Movimentação do Bispo (WHILE)
    // ==============================
    // O Bispo se move na diagonal.
    // Aqui simulamos o movimento do Bispo 5 casas na diagonal superior direita.

    printf("=== Início do Movimento do Bispo ===\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("=== Fim do Movimento do Bispo ===\n\n");

    // ==============================
    // Movimentação da Rainha (DO-WHILE)
    // ==============================
    // A Rainha pode se mover em todas as direções.
    // Aqui simulamos o movimento da Rainha 8 casas para a esquerda.

    printf("=== Início do Movimento da Rainha ===\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);
    printf("=== Fim do Movimento da Rainha ===\n");

    return 0;
}
