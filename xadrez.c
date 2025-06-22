#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// === Funções Recursivas ===

// Função recursiva para a Torre: direita
void moverTorre(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para a Rainha: esquerda
void moverRainha(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva para o Bispo: diagonal cima-direita com loop aninhado
void moverBispo(int linha, int coluna, int maxMovimentos) {
    if (linha >= maxMovimentos || coluna >= maxMovimentos) return;

    int i = linha;
    do {
        printf("Cima\n");

        int j = coluna;
        do {
            printf("Direita\n");
            break; // evita múltiplas impressões por recursão
        } while (++j < maxMovimentos);

        break; // garante apenas uma execução por recursão
    } while (++i < maxMovimentos);

    moverBispo(linha + 1, coluna + 1, maxMovimentos);
}

int main() {
    printf("=== Início do Programa ===\n\n");

    // ==============================
    // Movimento da Torre (recursivo)
    // ==============================
    printf("=== Início do Movimento da Torre ===\n");
    moverTorre(5);
    printf("=== Fim do Movimento da Torre ===\n\n");

    // ==============================
    // Movimento do Bispo (recursivo + loop aninhado)
    // ==============================
    printf("=== Início do Movimento do Bispo ===\n");
    moverBispo(0, 0, 5);
    printf("=== Fim do Movimento do Bispo ===\n\n");

    // ==============================
    // Movimento da Rainha (recursivo)
    // ==============================
    printf("=== Início do Movimento da Rainha ===\n");
    moverRainha(8);
    printf("=== Fim do Movimento da Rainha ===\n\n");

    // ==============================
    // Movimento do Cavalo (loops aninhados, múltiplas condições, continue/break)
    // ==============================
    printf("=== Início do Movimento do Cavalo ===\n");

    int movimentosCima = 2;
    int movimentosDireita = 1;
    int cima, direita;

    for (cima = 1; cima <= movimentosCima; cima++) {
        // Simula uma casa para cima a cada iteração
        printf("Cima\n");

        // Quando chega na segunda casa para cima, faz o movimento para a direita
        if (cima == movimentosCima) {
            for (direita = 1; direita <= movimentosDireita; direita++) {
                if (direita == 0) continue;  // não entra aqui, mas demonstra uso
                if (direita > 1) break;      // demonstra uso de break
                printf("Direita\n");
            }
        }
    }

    printf("=== Fim do Movimento do Cavalo ===\n\n");

    printf("=== Fim do Programa ===\n");
    return 0;
}