#include <stdio.h>

int TamanhoTabuleiro [10][10];
int TamanhoNavio [3][3];

// Função para imprimir o tabuleiro com letras nas colunas e números nas linhas

void imprimeTabuleiro(int TamanhoTabuleiro[10][10]){
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
    
    int Tabuleiro[10][10];
    int i, j;

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            Tabuleiro[i][j] = 0;
        }
    }

   printf("\n");

    // Definine o tamanho dos navios (3)
    int navio1 [3] = {3, 3, 3}; // Navio 1 (horizontal)
    int navio2 [3] = {3, 3, 3}; // Navio 2 (vertical)


    // Coordenadas dos navios
    
    // Navio 1: horizontal, começa na linha 2, coluna 3
    int navio1_linha = 1; // linha 2
    int navio1_coluna = 2; // coluna C

    // Navio 2: vertical, começa na linha 5, coluna 6 (índices 4,5)
    int navio2_linha = 4; // linha 5
    int navio2_coluna = 5; // coluna F


    // VALIDAÇÕES DA INCLUSÃO DOS NAVIOS NO TABULEIRO

    // Validação dos limites do Tabuleiro

    // Validação dos limites para navio 1 (horizontal)
    if (navio1_coluna + 3 > 10) {
        printf("Erro: Navio 1 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 2 (vertical)
    if (navio2_linha + 3 > 10) {
        printf("Erro: Navio 2 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação de sobreposição de navios

    // Verifica sobreposição antes de posicionar navio 1

    for (j = 0; j < 3; j++) {
        if (Tabuleiro[navio1_linha][navio1_coluna + j] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 1.\n");
            return 1;
        }
    }

    // Verifica sobreposição antes de posicionar navio 2
    for (i = 0; i < 3; i++) {
        if (Tabuleiro[navio2_linha + i][navio2_coluna] != 0) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 2.\n");
            return 1;
        }
    }


    // Posiciona os Navios no tabuleiro

    // Posiciona o navio 1 (horizontal)

    for (i = 0; i < 3; i++) {
        Tabuleiro[navio1_linha][navio1_coluna+ i] = 3;
    }

    // Posiciona navio 2 (vertical)
    for (i = 0; i < 3; i++) {
        Tabuleiro[navio2_linha+ i][navio2_coluna] = 3;
    }

    printf("\n");
    printf("\n");

    // Exibe o tabuleiro Final
   
    imprimeTabuleiro(Tabuleiro);
   
    printf("\n");
    printf("\n");


    return 0;
}