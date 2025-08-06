#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIOS 3

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



    // VALIDAÇÕES DA INCLUSÃO DOS NAVIOS NO TABULEIRO

    // Validação dos limites do Tabuleiro

    // Validação dos limites para navio 1 (horizontal)
    if (navio1_coluna + NAVIOS > 10) {
        printf("Erro: Navio 1 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 2 (vertical)
    if (navio2_linha + NAVIOS > 10) {
        printf("Erro: Navio 2 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 3 (diagonal)
    if (navio3_linha + NAVIOS > 10 || navio3_coluna + 3 > 10) {
        printf("Erro: Navio 3 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 4 (diagonal)
    if (navio4_linha + NAVIOS > 10 || navio4_coluna + 3 > 10) {
        printf("Erro: Navio 4 fora dos limites do tabuleiro.\n");
        return 1;
    }


    // Validação de sobreposição de navios

    // Verifica sobreposição antes de posicionar navio 1

    for (j = 0; j < NAVIOS; j++) {
        if (Tabuleiro[navio1_linha][navio1_coluna + j] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 1.\n");
            return 1;
        }
    }

    // Verifica sobreposição antes de posicionar navio 2
    for (i = 0; i < NAVIOS; i++) {
        if (Tabuleiro[navio2_linha + i][navio2_coluna] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 2.\n");
            return 1;
        }
    }

    // Verifica sobreposição antes de posicionar navio 3 (diagonal)
    for (i = 0; i < NAVIOS; i++) {
        if (Tabuleiro[navio3_linha + i][navio3_coluna + i] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 3.\n");
            return 1;
        }
    }   

    // Verifica sobreposição antes de posicionar navio 4 (diagonal)
    for (i = 0; i < NAVIOS; i++) {
        if (Tabuleiro[navio4_linha + i][navio4_coluna + i] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 4.\n");
            return 1;
        }
    }



    // Posiciona os Navios no tabuleiro

    // Posiciona o navio 1 (horizontal)

    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio1_linha][navio1_coluna+ i] = 3;
    }

    // Posiciona navio 2 (vertical)
    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio2_linha+ i][navio2_coluna] = 3;
    }

    // Posiciona navio 3 (diagonal)
    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio3_linha + i][navio3_coluna - i] = 3;
    }   

    // Posiciona navio 4 (diagonal)
    for (i = 0; i < NAVIOS; i++) {
        Tabuleiro[navio4_linha + i][navio4_coluna + i] = 3;
    }


    printf("\n");
    printf("\n");

    // Exibe o tabuleiro Final
   
    imprimeTabuleiro(Tabuleiro);
   
    printf("\n");
    printf("\n");
 

    return 0;
}