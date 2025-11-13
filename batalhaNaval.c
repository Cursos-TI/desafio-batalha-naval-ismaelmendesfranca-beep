#include <stdio.h>

#define TAM 10     // Tamanho fixo do tabuleiro 10x10
#define TAM_NAVIO 3 // Tamanho fixo dos navios

int main() {
    int tabuleiro[TAM][TAM]; // Matriz que representa o tabuleiro
    int i, j;

    // 1️⃣ Inicializa o tabuleiro com 0 (representando água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2️⃣ Define os navios (arrays unidimensionais)
    int navioHorizontal[TAM_NAVIO] = {3, 3, 3};
    int navioVertical[TAM_NAVIO] = {3, 3, 3};

    // 3️⃣ Define as coordenadas iniciais dos navios
    // (fixas no código para o nível básico)
    int linhaH = 2, colunaH = 4; // início do navio horizontal
    int linhaV = 5, colunaV = 7; // início do navio vertical

    // 4️⃣ Posiciona o navio horizontal no tabuleiro
    for (i = 0; i < TAM_NAVIO; i++) {
        if (colunaH + i < TAM) { // valida se está dentro dos limites
            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        }
    }

    // 5️⃣ Posiciona o navio vertical no tabuleiro
    for (i = 0; i < TAM_NAVIO; i++) {
        if (linhaV + i < TAM) { // valida se está dentro dos limites
            // verifica se já há um navio naquela posição (evita sobreposição)
            if (tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = navioVertical[i];
            }
        }
    }

    // 6️⃣ Exibe o tabuleiro no console
    printf("=== TABULEIRO DE BATALHA NAVAL ===\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
