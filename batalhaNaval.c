#include <stdio.h>
#include <stdlib.h>

// Desafio Batalha Naval - MateCheck

int main() {

    // Nível Novato - Posicionamento dos Navios
    int tabuleiro5[5][5] = {0};

    // Posiciona navio vertical (tamanho 3) iniciando em (0,1)
    for (int i = 0; i < 3; i++) {
        tabuleiro5[0 + i][1] = 1;
    }

    // Posiciona navio horizontal (tamanho 4) iniciando em (3,0)
    for (int j = 0; j < 4; j++) {
        tabuleiro5[3][0 + j] = 1;
    }

    printf("Nível Novato – Coordenadas dos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro5[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }


    // Nível Aventureiro - Posicionamento Diagonal
    int tabuleiro10[10][10] = {0};

    // Navio horizontal (tamanho 4) iniciando em (0,0)
    for (int j = 0; j < 4; j++) {
        tabuleiro10[0][0 + j] = 3;
    }

    // Navio vertical (tamanho 5) iniciando em (2,9)
    for (int i = 0; i < 5; i++) {
        tabuleiro10[2 + i][9] = 3;
    }

    // Navio diagonal "\" (tamanho 4) iniciando em (3,3)
    for (int k = 0; k < 4; k++) {
        tabuleiro10[3 + k][3 + k] = 3;
    }

    // Navio diagonal "/" (tamanho 3) iniciando em (8,2), subindo e indo para a direita
    for (int k = 0; k < 3; k++) {
        tabuleiro10[8 - k][2 + k] = 3;
    }

    printf("\nNível Aventureiro – Tabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro10[i][j]);
        }
        printf("\n");
    }


    // Nível Mestre - Habilidades Especiais com Matrizes
    int rows = 3, cols = 5;
    int centroLinha = rows / 2, centroColuna = cols / 2;

    int cone[3][5]     = {0};
    int octaedro[3][5] = {0};
    int cruz[3][5]     = {0};

    // Preenche padrão em cone
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j >= centroColuna - i && j <= centroColuna + i) {
                cone[i][j] = 1;
            }
        }
    }

    // Preenche padrão em octaedro
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (abs(i - centroLinha) + abs(j - centroColuna) <= centroLinha) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Preenche padrão em cruz
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == centroLinha || j == centroColuna) {
                cruz[i][j] = 1;
            }
        }
    }

    printf("\nNível Mestre – Padrão Cone:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nNível Mestre – Padrão Octaedro:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\nNível Mestre – Padrão Cruz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}