#include <stdio.h>
#include <locale.h>

#define TAM 10
#define NAVIO 3

int main() {
    setlocale(LC_ALL, "Portuguese");

    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // === Navio horizontal  ===
    int linhaH = 1, colH = 2;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaH][colH + i] = 3;
    }

    // === Navio vertical ===
    int linhaV = 4, colV = 6;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaV + i][colV] = 3;
    }

    // === Primerio Navio diagonal ===
    int linhaD1 = 0, colD1 = 0;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaD1 + i][colD1 + i] = 3;
    }

    // === Segundo Navio diagonal  ===
    int linhaD2 = 6, colD2 = 8;
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linhaD2 + i][colD2 - i] = 3;
    }

    // === Impressão do tabuleiro ===
    printf("  ");
    for (int i = 0; i < TAM; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}