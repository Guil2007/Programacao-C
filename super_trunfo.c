#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    //Declara as variáveis para cada atributo da cidade.
    char codigo_estado;
    char codigo_carta[3]; char nomecidade[20];
    int populacao; int pontos_turisticos;
    float pib; float area;

    // Cadastra as Cartas:

    Printf("Digite o Código do Estado: \n");
    Scanf( "%c", &codigo_estado);

    Printf("Digite o Código da Carta: \n");
    Scanf( "%s", &codigo_carta);

    Printf("Digite o Nome da Cidade: \n");
    Scanf( "%s", &nomecidade);

    Printf("Digite a População da Cidade: \n");
    Scanf( "%d", &populacao);

    Printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    Scanf( "%d", &pontos_turisticos);

    Printf("Digite a Área em Km2 da Cidade: \n");
    Scanf( "%f", &area;

    Printf("Digite o PIB em Reais da Cidade: \n");
    Scanf( "%f", &pib);
  
    // Exibe os Dados das Cartas:

    Printf("Código do Estado: %c", codigo_estado);
    Printf("Código da Carta: %s", codigo_carta);
    Printf("Nome da Cidade: %s", nomecidade);
    Printf("População: %d", populacao);
    Printf("Pontos Turísticos: %", pontos_turisticos);
    Printf("PIB: %f Reais", pib);
    Printf("Área: %f Km", area);

    return 0;
}
