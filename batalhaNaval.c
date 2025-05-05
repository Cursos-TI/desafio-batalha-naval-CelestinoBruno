#include <stdio.h>

int main() {
    
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I', 'J'};
    int tabuleiro[10][10];
    int navio = 3;

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas dos navios
    int linhaH = 2, colH = 4; // Horizontal a partir de (2,4)
    int linhaV = 5, colV = 1; // Vertical a partir de (5,1)

    // Posiciona navio horizontal
    for (int i = 0; i < navio; i++) {
        tabuleiro[linhaH][colH + i] = 3;
    }

    // Posiciona navio vertical
    for (int i = 0; i < navio; i++) {
        tabuleiro[linhaV + i][colV] = 3;
    }
    // Imprime o cabeçalho das colunas
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    // Imprime o tabuleiro com numeração das linhas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}