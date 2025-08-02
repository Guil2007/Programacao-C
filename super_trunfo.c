#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    //Declara as variáveis para cada atributo da cidade.
    char codigo_estado1; char codigo_estado2;
    char codigocarta1[4]; char nomecidade1[20]; char codigocarta2[4]; char nomecidade2[20];
    int populacao1; int pontos_turisticos1; int populacao2; int pontos_turisticos2;
    float pib1; float area1; float pib2; float area2

    // Cadastra as Cartas:

    ;printf(" \n");

    printf("Cadastre a Carta 1: \n");

    printf("Digite o Código do Estado: \n");
    scanf( "%c", &codigo_estado1);

    printf("Digite o Código da Carta: \n");
    scanf( "%s", &codigocarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf( "%s", &nomecidade1);

    printf("Digite a População da Cidade: \n");
    scanf( "%d", &populacao1);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf( "%d", &pontos_turisticos1);

    printf("Digite a Área em Km2 da Cidade: \n");
    scanf( "%f", &area1);

    printf("Digite o PIB em Reais da Cidade: \n");
    scanf( "%f", &pib1);
  
    printf(" \n");

    printf("Cadastre a Carta 2: \n");

    printf("Digite o Código do Estado: \n");
    scanf( " %c", &codigo_estado2);

    printf("Digite o Código da Carta: \n");
    scanf( "%s", &codigocarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf( "%s", &nomecidade2);

    printf("Digite a População da Cidade: \n");
    scanf( "%d", &populacao2);

    printf("Digite a Quantidade de Pontos Turísticos da Cidade: \n");
    scanf( "%d", &pontos_turisticos2);

    printf("Digite a Área em Km2 da Cidade: \n");
    scanf( "%f", &area2);

    printf("Digite o PIB em Reais da Cidade: \n");
    scanf( "%f", &pib2);



    // Exibe os Dados das Cartas:

    printf(" \n");
    printf(" \n");

    printf("Carta 1 \n");

    printf("Código do Estado: %c \n", codigo_estado1);
    printf("Código da Carta: %s \n", codigocarta1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("População: %d  Habitantes \n", populacao1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos1);
    printf("PIB: %.2f Reais \n" , pib1);
    printf("Área: %.2f Km \n", area1);

    printf(" \n");

    printf("Carta 2 \n");

    printf("Código do Estado: %c \n", codigo_estado2);
    printf("Código da Carta: %s \n", codigocarta2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d  Habitantes \n", populacao2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("PIB: %.2f Reais \n", pib2);
    printf("Área: %.2f Km \n", area2);

    printf(" \n");
    printf(" \n");

    return 0;
}