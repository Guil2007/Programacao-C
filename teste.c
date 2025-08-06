#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIOS 3
#define ALTCONE 3

void imprimeTabuleiro(int TamanhoTabuleiro[LINHAS][COLUNAS]){
    int i, j;
    // Imprime cabeçalho das colunas (letras)
    printf("   ");
    for (j = 0; j < 10; j++) {
        printf(" %c", 'A' + j);
    }
    printf("\n");

    // Imprime linhas do tabuleiro
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Números das linhas (1 a 10)
        for (j = 0; j < 10; j++) {
            printf(" %d", TamanhoTabuleiro[i][j]);
        }
        printf("\n");

    }
}

    int main() {
        int Tabuleiro[LINHAS][COLUNAS];
    int i, j;

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < 10; j++) {
            Tabuleiro[i][j] = 0;
        }
    }

   printf("\n");

    // Definine o tamanho dos navios (3)
    int navio1 [NAVIOS] = {3, 3, 3}; // Navio 1 (horizontal)
    int navio2 [NAVIOS] = {3, 3, 3}; // Navio 2 (vertical)
    int navio3 [NAVIOS] = {3, 3, 3}; // Navio 3 (Diagonal)
    int navio4 [NAVIOS] = {3, 3, 3}; // Navio 4 (Diagonal)


    // Coordenadas dos navios
    
    // Navio 1: horizontal, começa na linha 2, coluna 3
    int navio1_linha = 1; // linha 2
    int navio1_coluna = 2; // coluna C

    // Navio 2: vertical, começa na linha 5, coluna 6 (índices 4,5)
    int navio2_linha = 4; // linha 5
    int navio2_coluna = 5; // coluna F

    // Navio 3: diagonal, começa na linha 1, coluna 1 (índices 3,3)
    int navio3_linha = 3; // linha 4
    int navio3_coluna = 3; // coluna D

    // Navio 4: diagonal, começa na linha 8, coluna 8 (índices 7,7)
    int navio4_linha = 6; // linha 7
    int navio4_coluna = 3; // coluna D

    // Navio 5 : Cone, começa na linha 8, coluna C (índices 8,2)
    int navio5_linha = 9; // linha 8
    int navio5_coluna = 2; // coluna C 

    // Navio 6 : Losango, começa na linha 6, coluna I (índices 6,8)
    int navio6_linha = 6; // linha 6
    int navio6_coluna = 8; // coluna I  

    // Navio 7 : Cruz, começa na linha 1, coluna H (índices 1,7)
    int navio7_linha = 1; // linha 1
    int navio7_coluna = 7; // coluna H



    // VALIDAÇÕES DA INCLUSÃO DOS NAVIOS NO TABULEIRO

    // Validação dos limites para navio 1 (horizontal)
    if (navio1_coluna + NAVIOS > COLUNAS) {
        printf("Erro: Navio 1 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 2 (vertical)
    if (navio2_linha + NAVIOS > LINHAS) {
        printf("Erro: Navio 2 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 3 (diagonal inversa)
    if (navio3_linha + NAVIOS > LINHAS || navio3_coluna - (NAVIOS - 1) < 0) {
        printf("Erro: Navio 3 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 4 (diagonal)
    if (navio4_linha + NAVIOS > LINHAS || navio4_coluna + NAVIOS > COLUNAS) {
        printf("Erro: Navio 4 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 5 (cone: 1 no topo, 3 no meio, 5 na base)
    if (navio5_linha < ALTCONE - 1 || navio5_coluna < 2 || navio5_coluna + 2 > COLUNAS) {
        printf("Erro: Navio 5 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 6 (cruz 3x3)
    if (navio6_linha - 1 < 0 || navio6_linha + 1 >= LINHAS || navio6_coluna - 1 < 0 || navio6_coluna + 1 >= COLUNAS) {
        printf("Erro: Navio 6 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 7 (cruz 3x5)
    if (navio7_linha - 1 < 0 || navio7_linha + 1 >= LINHAS || navio7_coluna - 2 < 0 || navio7_coluna + 2 >= COLUNAS) {
        printf("Erro: Navio 7 fora dos limites do tabuleiro.\n");
        return 1;
    }



    // Validação de sobreposição de navios

  // Verifica sobreposição para navio 1 (horizontal)
    for (j = 0; j < NAVIOS; j++) {
        if (Tabuleiro[navio1_linha][navio1_coluna + j] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 1.\n");
            return 1;
        }
    }

    // Verifica sobreposição para navio 2 (vertical)
    for (i = 0; i < NAVIOS; i++) {
        if (Tabuleiro[navio2_linha + i][navio2_coluna] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 2.\n");
            return 1;
        }
    }

    // Verifica sobreposição para navio 3 (diagonal inversa)
    for (i = 0; i < NAVIOS; i++) {
        if (Tabuleiro[navio3_linha + i][navio3_coluna - i] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 3.\n");
            return 1;
        }
    }

    // Verifica sobreposição para navio 4 (diagonal)
    for (i = 0; i < NAVIOS; i++) {
        if (Tabuleiro[navio4_linha + i][navio4_coluna + i] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 4.\n");
            return 1;
        }
    }

    // Verifica sobreposição para navio 5 (cone)
    for (i = 0; i < ALTCONE; i++) {
        int largura = 1 + 2 * (ALTCONE - 1 - i);
        int coluna_inicial = navio5_coluna - (largura / 2);
        for (j = 0; j < largura; j++) {
            if (Tabuleiro[navio5_linha - i][coluna_inicial + j] != 0) {
                printf("Erro: Sobreposição detectada ao posicionar o navio 5.\n");
                return 1;
            }
        }
    }

    // Verifica sobreposição para navio 6 (cruz 3x3)
    for (i = -1; i <= 1; i++) {
        for (j = -1; j <= 1; j++) {
            if (i == 0 || j == 0) {
                if (Tabuleiro[navio6_linha + i][navio6_coluna + j] != 0) {
                    printf("Erro: Sobreposição detectada ao posicionar o navio 6.\n");
                    return 1;
                }
            }
        }
    }

    // Verifica sobreposição para navio 7 (cruz 3x5)
    for (i = -1; i <= 1; i++) {
        for (j = -2; j <= 2; j++) {
            if (i == 0 || j == 0) {
                if (Tabuleiro[navio7_linha + i][navio7_coluna + j] != 0) {
                    printf("Erro: Sobreposição detectada ao posicionar o navio 7.\n");
                    return 1;
                }
            }
        }
    }

    // Posiciona os Navios no tabuleiro

   // Posiciona navio 1 (horizontal)
    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio1_linha][navio1_coluna + i] = 3;
    }

    // Posiciona navio 2 (vertical)
    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio2_linha + i][navio2_coluna] = 3;
    }

    // Posiciona navio 3 (diagonal inversa)
    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio3_linha + i][navio3_coluna - i] = 3;
    }

    // Posiciona navio 4 (diagonal)
    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio4_linha + i][navio4_coluna + i] = 3;
    }

    // Posiciona navio 5 (cone)
    for (i = 0; i < ALTCONE; i++) {
        int largura = 1 + 2 * (ALTCONE - 1 - i);
        int coluna_inicial = navio5_coluna - (largura / 2);
        for (j = 0; j < largura; j++) {
            Tabuleiro[navio5_linha - i][coluna_inicial + j] = 1;
        }
    }

    // Posiciona navio 6 (cruz 3x3)
    for (i = -1; i <= 1; i++) {
        for (j = -1; j <= 1; j++) {
            if (i == 0 || j == 0) {
                Tabuleiro[navio6_linha + i][navio6_coluna + j] = 2;
            }
        }
    }

    // Posiciona navio 7 (cruz 3x5)
    for (i = -1; i <= 1; i++) {
        for (j = -2; j <= 2; j++) {
            if (i == 0 || j == 0) {
                Tabuleiro[navio7_linha + i][navio7_coluna + j] = 4;
            }
        }
    }

    printf("\n\n");
    imprimeTabuleiro(Tabuleiro);
    printf("\n\n");

    return 0;
}