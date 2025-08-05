#define BOARD_SIZE 10      // Tamanho fixo do tabuleiro (10x10)
#define SHIP_SIZE 3        // Tamanho fixo dos navios (3 posições)
#define WATER 0            // Valor para água
#define SHIP 3             // Valor para parte do navio

// Função para imprimir o tabuleiro com letras nas colunas e números nas linhas

void print_board(int board[BOARD_SIZE][BOARD_SIZE]) {
    int i, j;
    // Imprime cabeçalho das colunas (letras)
    printf("   ");
    for (j = 0; j < BOARD_SIZE; j++) {
        printf(" %c", 'A' + j);
    }
    printf("\n");

    // Imprime linhas do tabuleiro
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%2d ", i + 1); // Números das linhas (1 a 10)
        for (j = 0; j < BOARD_SIZE; j++) {
            printf(" %d", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int board[BOARD_SIZE][BOARD_SIZE];
    int i, j;

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = WATER;
        }
    }

    // Definição dos navios (tamanho 3)
    int ship1[SHIP_SIZE] = {SHIP, SHIP, SHIP}; // Navio 1 (horizontal)
    int ship2[SHIP_SIZE] = {SHIP, SHIP, SHIP}; // Navio 2 (vertical)

    // Coordenadas iniciais dos navios (definidas diretamente)
    // Navio 1: horizontal, começa na linha 2, coluna 3 (índices 1,2)
    int ship1_row = 1; // linha 2
    int ship1_col = 2; // coluna C

    // Navio 2: vertical, começa na linha 5, coluna 6 (índices 4,5)
    int ship2_row = 4; // linha 5
    int ship2_col = 5; // coluna F

    // Validação dos limites para navio 1 (horizontal)
    if (ship1_col + SHIP_SIZE > BOARD_SIZE) {
        printf("Erro: Navio 1 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Validação dos limites para navio 2 (vertical)
    if (ship2_row + SHIP_SIZE > BOARD_SIZE) {
        printf("Erro: Navio 2 fora dos limites do tabuleiro.\n");
        return 1;
    }

    // Verifica sobreposição antes de posicionar navio 1
    for (j = 0; j < SHIP_SIZE; j++) {
        if (board[ship1_row][ship1_col + j] != WATER) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 1.\n");
            return 1;
        }
    }
    // Posiciona navio 1 (horizontal)
    for (j = 0; j < SHIP_SIZE; j++) {
        board[ship1_row][ship1_col + j] = ship1[j];
    }

    // Verifica sobreposição antes de posicionar navio 2
    for (i = 0; i < SHIP_SIZE; i++) {
        if (board[ship2_row + i][ship2_col] != WATER) {
            printf("Erro: Sobreposição detectada ao posicionar o navio 2.\n");
            return 1;
        }
    }
    // Posiciona navio 2 (vertical)
    for (i = 0; i < SHIP_SIZE; i++) {
        board[ship2_row + i][ship2_col] = ship2[i];
    }

    // Exibe o tabuleiro final
    printf("\nTabuleiro Batalha Naval:\n");
    print_board(board);

    return 0;
}